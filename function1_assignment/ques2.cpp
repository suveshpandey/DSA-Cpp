//Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
float printArea(int r){
    cout<<"The area of the circle is = "<<3.14*r*r;
}
int main(){
    float r;
    cin>>r;

    printArea( r);
}