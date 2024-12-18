#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
public:
    int canAfford(int p){
        //cout<<"Enter the money: ";
        //cin>>p;
        if(p>price){
            return 1;
        }
        else{
            return 0;
        }
    }

    int isPresent(string n){
        if(n == name){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    Car car;
    car.name = "alto";
    car.price = 400000;
    cout<<car.canAfford(50000)<<endl;
    cout<<car.isPresent("alto")<<endl;
}