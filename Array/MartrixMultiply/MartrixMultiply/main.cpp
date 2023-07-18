//
//  main.cpp
//  MatrixMultiplication
//
//  Created by Abdullah Juhaif on 6/19/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int A[2][2]={{2,2},{2,2}};
    int B[2][2]={{1,0},{0,1}};
    int C[2][2];
    int sum=0,prod=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                prod=A[i][k]*B[k][j];
                sum += prod;
            }
            C[i][j]=sum;
            cout<<sum;
            sum=0;
            
        }
        
        
        cout<<endl;
    }
}
