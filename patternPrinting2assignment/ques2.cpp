/* Print the following pattern
Input: n = 4
Output:
      A
    A B C
  A B C D E
A B C D E F G */  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j = 1; j<=2*i-1; j++){
            cout<<char(j + 64)<<" ";
        }
        cout<<endl;
    }
}  