#include<iostream>
using namespace std;
int main(){
    float p;
    cout<<"Enter the value of principle value: ";
    cin>>p;
    
    float r;
    cout<<"Enter the value of rate: ";
    cin>>r;

    float t;
    cout<<"Enter the value of time: ";
    cin>>t;

    float si;
    si = (p*r*t)/100;
    cout<<"The value of simple interest is: "<<si;
    


}