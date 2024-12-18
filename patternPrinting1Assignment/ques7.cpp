/*
Print the following pattern
Sample Input : n = 4
Output :
****
****
****
**** */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 0; i<n;i++){
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}