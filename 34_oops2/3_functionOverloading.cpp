// fn overloading
#include<iostream>
using namespace std;
void add(int a , int b){
    cout<<a+b<<endl;
}

void add(int a){
    cout<<10+a<<endl;
}

void add(int a, double b){
    cout<<a+b;
}
int main(){
    add(2,3);
    add(4);
    add(10, 2.3);
}