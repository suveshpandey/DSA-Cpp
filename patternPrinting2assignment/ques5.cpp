/* Print the following pattern
Input: n = 4
Output:
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1           */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<i;
    }
    for(int i=n-1;i>=1;i-- ){
        cout<<i;
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i = 1; i<=m; i++){

        int a = 1;

        for(int j = 1; j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        for(int k = 1; k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j =  1; j<=m+1-i;j++){
            cout<<2*n-a;
            a++;
        }

cout<<endl;
    }
}