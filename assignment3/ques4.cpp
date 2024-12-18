//Given the length and breadth of a rectangle, 
//write a program to find whether numerically the 
//area of the rectangle is greater than its perimeter

#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length and breadth respectively: ";
    cin>>l>>b;

    float area;
    area = l*b;
    cout<<"Area = "<<area;
    cout<<endl;

    float perimeter;
    perimeter = 2*(l+b);
     cout<<"Perimeter = "<<perimeter;
     cout<<endl;

     if(area > perimeter) cout<<"Area is greater than Perimeter.";
     else if(area == perimeter) cout<<"Aera = Perimeter";

     else{
        cout<<"Perimeter > Area";
     }

}