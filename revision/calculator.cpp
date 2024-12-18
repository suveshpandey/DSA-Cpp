#include<iostream>
using namespace std;
int main(){
    cout<<endl;
    cout<<"~~~~~~~~~~ CALCULATOR ~~~~~~~~~~"<<endl;
    cout<<"     ---By Suvesh Pandey---"<<endl<<endl;

    float x,y;

    cout<<"Enter the 1st number: ";
    cin>>x;

    cout<<"Enter the 2nd number: ";
    cin>>y;
    cout<<endl;


    int c; // c = choice
    cout<<"Press 1 for addition: \nPress 2 for subtraction: \nPress 3 for multiplication: \nPress 4 for division: "<<endl;
    cin>>c;

    if(c == 1){
        cout<<"The addition of "<<x<<" and "<<y<<" is = "<<x+y;
    }

    else if(c == 2){
        cout<<"The subtraction of "<<x<<" and "<<y<<" is = "<<x-y;
    }

    else if(c == 3){
        cout<<"The multiplication of "<<x<<" and "<<y<<" is = "<<x*y;
    }

    else if(c == 4){
        cout<<"The division of "<<x<<" and "<<y<<" is = "<<x/y;
    }

    else{
        cout<<"Invalid input! ";
        cout<<"Try again.";
    }
}