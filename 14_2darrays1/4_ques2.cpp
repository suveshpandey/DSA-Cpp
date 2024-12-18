// write a c++ program to find the largest element of the given 2d array of integers.
#include<iostream>
#include<climits>
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
    // max
    int max = INT_MIN;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;

}