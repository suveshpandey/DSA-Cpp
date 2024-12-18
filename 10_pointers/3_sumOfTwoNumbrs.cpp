#include<iostream>
using namespace std;
int main(){
   /*  int x = 8;
    int y = 7;

    int* p1 = &x;
    int* p2 = &y;

    cout<<*p1 + *p2;  */



    int x,y;

    int* p1 = &x;
    int* p2 = &y;

    cout<<"Enter the 1st number: ";
    cin>>*p1;
    cout<<"Enter the 2nd number: ";
    cin>>*p2;

    cout<<x + y<<endl;
    cout<<*p1 + *p2;


}