#include<iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
    void show(){
        cout<<"Mai a ka show hun."<<endl; 
    }
};
class B : public A{
    public:
    int b_ka_public;
    void show(){
        cout<<"Aham B show asmi."<<endl;
    }
};

int main(){
    A a;
    a.show();
    B b;
    b.show();
}