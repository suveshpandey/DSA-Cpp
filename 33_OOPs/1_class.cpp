#include<iostream>
using namespace std;
class Player{
    public:
    int score; //data mambers
    //private:
    int health; 
    //  public
    string name; 

    //member function(s)
    void showHealth(){
        cout<<"Health = "<<health<<endl;
    }
};

class calculator{
    private:
    int a = 1;
    int b = 2;
    public:
    void add(){
        cout<<a+b;
    }
    void subtract(){
        cout<<a-b;
    }
};
int main(){
    Player suvesh;
    suvesh.score = 90;
    suvesh.health = 100;
    suvesh.name = "SP298";

    cout<<suvesh.score<<endl;
    cout<<suvesh.health<<endl;
    cout<<suvesh.name<<endl;
    cout<<endl;
    suvesh.showHealth();

    calculator calci;
    calci.add();
    cout<<endl;
    calci.subtract();

}