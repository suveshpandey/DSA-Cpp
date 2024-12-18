#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x; //9.1
    int y = (float)x;   // y = 9
    float z = (float)y; // z = 9
    x = x-z;
    cout<<x;
}