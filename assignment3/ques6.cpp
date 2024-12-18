//: If the marks of A, B and C are input through 
//the keyboard, write a program to determine the 
//student scoring least marks.

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    char a,b,c;
    cout<<"Enter the marks of the students respectively: ";
    cin>>x>>y>>z;

    if(x<y and x<z){
        cout<<"a has scored least marks. "<<x;

    }
    else if(y<x and y<z){
        cout<<"b has scored least marks. "<<y;

    }
    else{
        cout<<"c has scored least marks. "<<z;
    }


}