#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the month number: ";
    cin>>x;

    switch(x<=7 and x%2 == 0){
        case 1:
        cout<<"31";
        break;
    }
    switch(x>=8 and x%2 == 0){
        case 1:
        cout<<"31";
        break;

    }
    switch(x == 4 || x == 6 || x== 9 || x == 11){
        case 1 :
        cout<<"30";
        break;
    }
    
    switch(x){
        case 2:
        cout<<"28";
        break;
    }


}