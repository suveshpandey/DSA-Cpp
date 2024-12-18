#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number here: ";
    cin>>n;
    // 100 97 94 ... 7 4 1 -> 34 terms
    int a = 100;
    for(int i = 1; i<=34; i++) {
        cout<<a<<endl;
        a = a-3;

    }
}