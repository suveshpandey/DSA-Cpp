#include<iostream>
using namespace std;
int main(){
 
    // matrix multiplication
    int r1,c1;
    cin>>r1>>c1;

    int A[r1][c1];
    // input of matrix A:-
    for(int i = 0 ;i<r1;i++){
        for(int j= 0; j<c1;j++){
            cin>>A[i][j];
        }
    }

    int r2,c2;
    cin>>r2>>c2;

    int B[r2][c2];
    // input of matrix B:-
    for(int i = 0 ;i<r2;i++){
        for(int j = 0; j<c2; j++){
            cin>>B[i][j];
        }
    }
    if(c1 != r2) cout<<"Matrix multiplication is not possible.";
    
    // multiplicated matrix C:-
    int C[r1][c2];
    
    for(int i = 0 ; i<r1;i++){
        for(int j=0; j<r2;j++){
            int value =0 ;
            for(int k = 0; k<r2;k++){
                value+=A[i][k]*B[k][j];
            }
            C[i][j] = value;
        }
    }

    // printing matrix C:-
    cout<<"Multiplication :-"<<endl;
    for(int i = 0 ;i<r1;i++){
        for(int j = 0; j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }  
}


// transpose of a matrix

    // matrix A:-
     /*  cout<<"Enter the row and column:-";
    int m,n;
    cin>>m>>n;
    
    int A[m][n];
    cout<<"Enter the elements: ";
    for(int i =0; i<m;i++){
        for(int j = 0; j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Given matrix: "<<endl;
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    // transpose of A:-
    int transpose[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            transpose[i][j] = A[j][i];
        }
    }
    cout<<"Transpose :-"<<endl;
    for(int i = 0;i<n;i++){
        for(int j=0; j<m;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }



}*/