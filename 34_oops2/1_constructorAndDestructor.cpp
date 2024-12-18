#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    Bike(int tyreSize,int engineSize){
        // cout<<"Constructor call hua!"<<endl;
        this-> tyreSize = tyreSize;
        this-> engineSize= engineSize;
    }
    ~Bike(){
        cout<<"Destructor call hua!"<<endl;
    }
};
int main(){
    

    Bike tvs( 10 , 100);
    Bike honda( 20, 200);
    Bike splender( 23, 150);

    //scope wali cheez
    bool flag = true;
    if(flag == true){
        Bike bmw(25, 10000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }

    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<splender.tyreSize<<" "<<splender.engineSize<<endl;

    

}