/* Input: n = 4
Output:
1

A B
1 2 3
A B C D
1 2 3 4 5 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        if(i%2 == 1)
        for(int j = 1; j<=i;j++){
            cout<<j<<" ";
        }
        else
        for(int j = 1; j <= i;  j++){
            cout<<(char)('A' + j - 1)<<" ";
        }
        cout<<endl;
    }
}