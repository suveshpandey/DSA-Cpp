// write a program to  print sum of all the elements of a 2d matrix
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
    // sum
    int sum = 0;
   
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;

}