//: Given the radius of the circle predict 
//whether numerically area of this circle is larger 
//than the circumference or not


#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter the radius: ";
    cin>>r;

    float area;
    area = 3.14 * r* r;
    cout<<"area = "<<area;
    cout<<endl;

    float circumference;
    circumference = 2*3.14*r;
    cout<<"circumference = "<<circumference;
    cout<<endl;

    if(area > circumference) cout<<"Area is greater than circumference.";
    else if(area = circumference) cout<<"Area = Circumference.";
    else{
        cout<<"Circumference is greater than area.";
    }

}