#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the problem: ";
    cin>>a>>op>>b;

    if(op == '+') cout<<a+b;
    if(op == '-') cout<<a-b;
    if(op == '*') cout<<a*b;
    if(op == '/') cout<<a/b;


}
