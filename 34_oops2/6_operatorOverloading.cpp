#include<iostream>
using namespace std;
class A{
    public:
    int age;
};
class ComplexNumber{
    public:
    int imaginary;
    int real;
};
int main(){
    ComplexNumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary = 2;
    a2.real = 3;

    ComplexNumber a3;
    a3.real = a1.real + a2.real;
    a3.imaginary = a1.imaginary + a2.imaginary;

    cout<<"real: "<<a3.real<<endl<<"imaginary: "<<a3.imaginary<<endl;
    // not exactly this code