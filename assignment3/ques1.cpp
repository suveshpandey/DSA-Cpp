//: Take 2 integers input and print the greatest og them.

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;

    if(x>y) cout<<x<<" is the greatest number.";
    else{
        cout<<y<<" is the greatest number.";
    }


}