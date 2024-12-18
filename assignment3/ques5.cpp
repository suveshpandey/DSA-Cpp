//Write a program to input sides of a triangle 
//and check whether a triangle is equilateral, scalene 
//or isosceles triangle

#include<iostream>
using namespace std;
int main(){
    float x,y,z;

    cout<<"Enter all the three sides of the triangle respectively: ";
    cin>>x>>y>>z;
    if(x == y == z){
        cout<<"This is an equalateral triangle.";
    
    }
    if(x == y or y == z or z == x){
        cout<<"This is an isoscales triangle.";
    
    }

    if(x != y != z){
        cout<<"This is an isoscalen triangle.";
    }
}

