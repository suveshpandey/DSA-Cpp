#include<iostream>
using namespace std;
class Vehicle{ // base class or parent class
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    void showCompany(){
        cout<<companyName<<endl;
    }

    Vehicle(){
        cout<<"vehicle ka constructor call hua."<<endl  ;
    }
};

class Car : public Vehicle{ // car inherites vehicle
public:
    int steeringSize;
    
};

class Bike : public Vehicle{  // derived or child class
public:
    int handleSize;
    Bike(){
        cout<<"bike ka constructor call ho rha h."<<endl;
    }
};
class A{
    private:
    int a_ka_private; // can't be accessed from outside, can't be inherited

    protected:
    int a_ka_protected;  // can't be accessed form outside, but can be inherited

    public:            
    int a_ka_pulic;          // can be accessed and can be inherited
};
class B : public A{   // single inheritance
    public:
    int b_ka_public;
    void show(){

    }
};
class C : public B, public A{      // multiple inheritance

};
int main(){
    
    Bike honda;
    honda.handleSize = 5;
    honda.tyreSize= 10;
    honda.engineSize= 500;
    
    honda.companyName = "HONDA";
    
    cout<<honda.tyreSize<<endl;
    honda.showCompany();

    B b;
    //b.
}