#include<iostream>
using namespace std;
class A{
    private:
    int a_private = 10;
    public:
    friend void show(A &a);
    void show2(){
        cout<<a_private<<endl;
    }
};
void show(A &a){
    cout<<a.a_private<<endl;
}

int main(){
    A a;
    show(a);
    //a.show2();
    const int x = 10;
    cout<<x;   // value will be 10, will not change
    int x = 20;
    cout<<x<<endl;
}