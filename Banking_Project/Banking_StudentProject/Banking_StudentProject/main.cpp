//
//  main.cpp
//  Banking_StudentProject
//
//  Created by Abdullah Juhaif on 8/19/23.


#include <iostream>
#include <string>
#include <map>
#include<fstream>
#define MIN_BAL 500
#define RED_COLOR_CODE "\033[0;31m"
#define RESET_COLOR_CODE "\033[0m"
using namespace std;
// Account is a class which should have FirstName,LastName,Balance,the account number and the next account number
// As the next account number needs to accessed by mytiple objects we are going to keep that static
// Inorder to read it even after the code is restarted we need to save the details to a file and read it from a file
// but if we add Add multiple objects of account to a file then while reading a specific account we will have to know the number of accounts which are present in order to iterate though the file and also have an if condition for the account number to match the user input, Instead if we cretae a map<long,Account> the long will be the key which will be equal to the  account number we can select the value from the given key also we do not need to know the size of the file, by this way we are reducing the time complexcity as to iterate throuugh a larger file take more time where as putting it in a map reduces the time
// Classes
class noAccount:exception{};
class invalidInput:exception{};
class negetiveDeposite:exception{};
class minBalance:exception{
private:
    int withdraw;
    string action;
public:
    minBalance(int withdraw,string action){
        this->withdraw=withdraw;
        this->action=action;
    }
    friend ostream &operator<<(ostream &o,minBalance m){
        o<<"Cannot "<<m.action<<" as balance "<<m.withdraw<<" is lower than "<<MIN_BAL;
        return o;
    }
};
class Account{
private:
    string firstName;
    string lastName;
    float balance;
    long accountNumber;
    static long nextAccount;
public:
    //We need a non parameteraized constructor as when we initiate the data the static member should not be incremented it should only be incremented when the account object is set with data
    Account();
    Account(string firstName,string lastName,float balance);
    void setAccount(string firstName,string lastName,float balance);
    void deposite(int deposite);
    void withdraw(int withdraw);
    //when restarting the application the static variable becomes 0 in order to set it we need a function
    long getAccount();
    static void setNextAccount(long accountNumber);
    friend ofstream &operator<<(ofstream &ofs,Account &a);
    friend ifstream &operator>>(ifstream &ifs,Account &a);
    friend ostream &operator<<(ostream &o,Account &a);
};
using mapLA = map<long,Account>;
class Bank{
public:
    mapLA accounts;
public:
    Bank();
    Account openAccount(string firstName="0",string lastName="0",float balance=0);
    Account balanceEnquiery(long accountNumber);
    Account deposite(long accountNumber,int deposite);
    Account withdraw(long accountNumber,int withdraw);
    void closeAccount(long accountNumber);
    void showAllAccounts();
    ~Bank();
};
long Account::nextAccount=0;
//Class Deffinition
///Account member definitions
Account::Account(){};
Account::Account(string firstName,string lastName,float balance){
    setAccount(firstName,lastName,balance);
}
void Account::setAccount(string firstName, string lastName, float balance){
    this->firstName=firstName;
    this->lastName=lastName;
    this->balance=balance;
    nextAccount++;
    accountNumber=nextAccount;
}
long Account::getAccount(){
    return accountNumber;
}
void Account::setNextAccount(long accountNumber){
    nextAccount=accountNumber;
}
void Account::deposite(int deposite){
    balance+=deposite;
}
void Account::withdraw(int withdraw){
    
    if((balance-withdraw)<MIN_BAL){
        auto b=balance-withdraw;
        throw minBalance(b,"withdraw");
    }
    balance-=withdraw;
}
ofstream &operator<<(ofstream &ofs, Account &a){
    ofs<<a.accountNumber<<endl;
    ofs<<a.firstName<<endl;
    ofs<<a.lastName<<endl;
    ofs<<a.balance<<endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs,Account &a){
    ifs>>a.accountNumber;
    ifs.ignore();
    getline(ifs,a.firstName);
    getline(ifs,a.lastName);
    ifs>>a.balance;
    ifs.ignore();
    return ifs;
}
ostream &operator<<(ostream &o,Account &a){
    o<<"\n\tAccount Number: "<<a.accountNumber;
    o<<"\n\tFirst Name: "<<a.firstName;
    o<<"\n\tLast Name: "<<a.lastName;
    o<<"\n\tBalance: "<<a.balance<<endl;
    return o;
}
/// Bank Member function definition bank will get the accounts from the file and sore it in a map
Bank::Bank(){
    ifstream file;
    Account acc;
    file.open("Bank.txt");
    if(!file){
        cout<<"The File does not exist";
    }
    else{
        while(!file.eof()){
            file>>acc;
            accounts.insert(pair<long,Account>(acc.getAccount(),acc));
        }
       //acc.setNextAccount(acc.getAccount());
        Account::setNextAccount(acc.getAccount());
    }
    file.close();
}
Account Bank::openAccount(string firstName,string lastName,float balance){
    if(balance<MIN_BAL){
        throw minBalance(balance,"create account");
    }
    Account acc(firstName,lastName,balance);
    //When the app is running it will not have to go fetch from the file to read as we are reading from the map only so when the destructor is called it needs to write to the file
//    ofstream file("Bank.txt",ios::app);
    // We can write to the file s bellow but when we read we will have tor ead it by opening the file,which is time consuming hence we can append it to the bank object which is being created in the begining of the program and the custructor loads the content of the file to the map. and here we can insert to the map and then write to the file so while the program is running we do not have to load to the map multiple times
//    file<<acc;
    accounts.insert(pair<long,Account>(acc.getAccount(),acc));
    // once the value is inserted we can write from the map to the file
//    mapLA::iterator itr;
//    itr=accounts.find(acc.getAccount());
//    file<<itr->second;
//    file.close();
    return acc;
}
Account Bank::balanceEnquiery(long accountNumber){
    Account acc;
    mapLA::iterator itr;
    itr=accounts.find(accountNumber);
    if (itr == accounts.end()) {
        throw noAccount();
    }
    acc=itr->second;
    return acc;
}
Account Bank::deposite(long accountNumber,int deposite){
//    Account acc;
//    mapLA::iterator itr;
//    itr=accounts.find(accountNumber);
//    acc=itr->second;
//    acc.deposite(deposite);
//    //this will be required as we are assigining value in the map to acc which is a seperate object,
//    accounts[accountNumber]=acc;
    // To avoid explicitly loading into the map we can use the iterator to modify the object in the map itself
    if (deposite < 0){
        throw negetiveDeposite();
    }
    mapLA::iterator itr;
    itr=accounts.find(accountNumber);
    if (itr == accounts.end()) {
        throw noAccount();
    }
    itr->second.deposite(deposite);
    return itr->second;
    
}
Account Bank::withdraw(long accountNumber,int withdraw){
    if (withdraw < 0){
        throw negetiveDeposite();
    }
    mapLA::iterator itr;
    itr=accounts.find(accountNumber);
    if (itr == accounts.end()) {
        throw noAccount();
    }
    itr->second.withdraw(withdraw);
    return itr->second;
}
void Bank::closeAccount(long accountNumber){
    mapLA::iterator itr;
    itr=accounts.find(accountNumber);
    if (itr == accounts.end()) {
        throw noAccount();
    }
    cout<<"The account to delete\n"<<itr->second;
    accounts.erase(accountNumber);
}
void Bank::showAllAccounts(){
    mapLA::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++){
        cout<<itr->second;
    }
}
Bank::~Bank(){
    ofstream file("Bank.txt");
    mapLA::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++){
        file<<itr->second<<endl;
    }
    file.close();
}
//Main funtion
int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout <<"** Banking System **\n";
    Bank b;
    Account acc;
    int balance;
    string firstName;
    string lastName;
    long accountNumber;
    int deposite;
    int withdraw;
    int option;
    do{
        cout<<"\n\t1. Open an Account\n\t2. Balance Enquiry\n\t3. Deposite\n\t4. Withdrawal\n\t5. Close an Account\n\t6. Show All accounts\n\t7. Quit"<<endl;
        cout<<"Enter the options:"<<endl;
        cin>>option;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        try{
            switch (option){
                case 1:
                    cout<<"Enter first name: ";
                    getline(cin,firstName);
                    cout<<"Enter last Name name: ";
                    getline(cin,lastName);
                    cout<<"Enter Balance: ";
                    cin>>balance;
                    if(cin.fail()){
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        throw invalidInput();
                    }
                    acc=b.openAccount(firstName,lastName,balance);
                    cout<<"Congratulations Your account is created"<<endl;
                    break;
                case 2:
                    cout<<"Enter the Account Number:" ;
                    cin>>accountNumber;
                    acc=b.balanceEnquiery(accountNumber);
                    cout<<acc;
                    break;
                case 3:
                    cout<<"Enter the account Number: ";
                    cin>>accountNumber;
                    cout<<"Amount to deposite: ";
                    cin>>deposite;
                    if(cin.fail()){
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        throw invalidInput();
                    }
                    acc=b.deposite(accountNumber,deposite);
                    cout<<acc;
                    break;
                case 4:
                    cout<<"Enter the account Number: ";
                    cin>>accountNumber;
                    cout<<"Amount to Withdraw: ";
                    cin>>withdraw;
                    if(cin.fail()){
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        throw invalidInput();
                    }
                    acc=b.withdraw(accountNumber, withdraw);
                    cout<<acc;
                    break;
                case 5:
                    cout<<"Enter the account Number: ";
                    cin>>accountNumber;
                    b.closeAccount(accountNumber);
                    break;
                case 6:
                    cout<<"Listing All the accounts\n";
                    b.showAllAccounts();
                    break;
                case 7:
                    break;
            }
            
        }catch(noAccount e){
            cout<<"The account Does not exist"<<endl;
        }
        catch(invalidInput e){
            cout<<"The balance can only be an Integer and Account is not created";
        }
        catch(negetiveDeposite e){
            cout<<"The deposite cannot be negetive";
        }
        catch(minBalance e){
            cout<<e;
        }
        catch (...){
                cout<<"Error";
            }
        
    }while(option!=7);
    return 0;
}
