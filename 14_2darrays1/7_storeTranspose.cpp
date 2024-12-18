#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the nuber of rows: ";
    cin>>m;

    int n;
    cout<<"Enter the nuber of columns: ";
    cin>>n;

    int arr[m][n];
    for(int i = 0;i<=m-1;i++){
        for(int j = 0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    
    for(int i = 0;i<=m-1;i++){     // rows
        for(int j = 0;j<=n-1;j++){  // columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
    cout<<endl;
    // store the transpose
    int t[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            t[i][j] = arr[j][i];
        }
    }
    // printing transpose
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
}