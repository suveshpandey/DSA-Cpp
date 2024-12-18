#include<iostream>
using namespace std;
int main(){
    float x, y;
    cout<<"Enter the 1st number: ";
    cin>>x;
    
    cout<<"Enter the 2nd number: ";
    cin>>y;
    cout<<endl;

    cout<<"press 1 for addition"<<endl<<"press 2 for subtraction"<<endl<<"press 3 for multiplication"<<endl<<"press for division";
    cout<<endl;
    cout<<endl;
    cout<<"press your choice  from 1 to 4: ";
    int c;
    cin>>c;
    cout<<endl;
    if(c == 1){
        cout<<x+y;
    }
    else if(c == 2){
        cout<<x-y;
    }
    else if(c == 3){
        cout<<x*y;

    }
    else if(c == 4){
        cout<<x/y;
    }

}