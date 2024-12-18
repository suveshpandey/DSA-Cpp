#include<iostream>
using namespace std;
class Bike{
public:
    static int noOfBikes; // this belongs to the class
    int tyreSize;
    int engineSize;

    Bike(int tyreSize,int engineSize){
        // cout<<"Constructor call hua!"<<endl;
        this-> tyreSize = tyreSize;
        this-> engineSize= engineSize;
    }

    static void increaseNoOfbikes(){
        noOfBikes++;
    }
};
void print(){
    //int b = 10;
    static int b = 10;
    cout<<b<<endl;
    b++;
}
int Bike::noOfBikes = 10;   // where :: -> scope resolution operator
int main(){
    print();
    print();
    print();
    
    Bike tvs( 10 , 100);
    Bike splender( 23, 150);


    //cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    //cout<<splender.tyreSize<<" "<<splender.engineSize<<endl;
    cout<<tvs.noOfBikes<<" "<<splender.noOfBikes<<endl;

    tvs.increaseNoOfbikes();
    cout<<tvs.noOfBikes<<" ";
    cout<<splender.noOfBikes;

    

}