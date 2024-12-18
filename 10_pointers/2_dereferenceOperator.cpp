#include<iostream>
using namespace std;
int main(){
    int x= 122;
    cout<<x<<endl;

    int* p = &x;
    cout<<p<<endl;

    *p = 8;      // updating the value of x.
    cout<<x;
}