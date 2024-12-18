// volume of cylindeer

#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter the value of radius: ";
    cin>>r;

    float h;
    cout<<"Enter the value of height: ";
    cin>>h;

    float volume;
    volume = 3.14 * r*r*h;

    cout<<"The volume of the given cylinder is: ";
    cout<<volume;


}