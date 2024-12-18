#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2,r,c;
    
    // matrix A input
    cout<<"Enter the row of matrix A: ";
    cin>>r1;
    cout<<"Enter the column of matrix A: ";
    cin>>c1;

    int A[r1][c1];
    cout<<"Enter the elements: ";
    for(int i = 0; i<r1;i++){
        for(int j  =0; j<c1;j++){
            cin>>A[i][j];
        }
    } 
    // matrix B input
     cout<<"Enter the row of matrix B: ";
    cin>>r2;

    cout<<"Enter the column of matrix B: ";
    cin>>c2;

    int B[r2][c2];
    cout<<"Enter the elements: ";
    for(int i = 0; i<r2;i++){
        for(int j = 0; j<c2;j++){
            cin>>B[i][j];
        }
    }
    // matrix A output
    
    cout<<"Matrix A:-"<<endl;
    for(int i = 0; i<r1;i++){
        for(int j  =0; j<c1;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    } 

    // matrix B output
    cout<<"Matrix B:-"<<endl;
    for(int i = 0; i<r2;i++){
        for(int j = 0; j<c2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    // matrix sum
    if(r1 != r2 && c1 != c2){
        cout<<"Matrix addition is not possible.";
        return 0;
    }
    cout<<"Sum:- "<<endl;
    int sum[r2][c2];
    for(int i = 0; i<r2;i++){
        for(int j = 0; j<c2;j++){
            sum[i][j] = A[i][j] + B[i][j];   
            cout<<sum[i][j]<<" ";     
        } 
        cout<<endl;
    }
}