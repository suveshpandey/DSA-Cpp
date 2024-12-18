//Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int product(int *ptr1, int *ptr2){
    cout<<(*ptr1)*(*ptr2);
}
int main(){
    int a = 10;
    int b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;

    product(ptr1, ptr2);
}