/*  Print the following pattern

Input: n = 4
Output:

A B C D E F G
A B C   E F G
A B       F G
A           G               */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i = 1; i<=m; i++){

        int a = 1;

        for(int j = 1; j<=m+1-i;j++){
            cout<<char(a+64)<<" ";
            a++;
        }
        for(int k = 1; k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j =  1; j<=m+1-i;j++){
            cout<<char(a+64)<<" ";
            a++;
        }
        cout<<endl;
    }
}