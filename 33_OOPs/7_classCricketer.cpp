#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int age;
    int noOfTestMatches;
    int averageScore;
    
};
int main(){
    Cricketer sachin;
    sachin.name = "sachinTendulkar";
    sachin.age = 46;
    sachin.noOfTestMatches = 200;
    sachin.averageScore= 100;

    Cricketer dhoni;
    dhoni.name = "msd";
    dhoni.age = 38;
    dhoni.noOfTestMatches = 300;
    dhoni.averageScore= 300;
    Cricketer cricketers[2] = {sachin, dhoni};

    for(int i = 0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].noOfTestMatches<<endl;
        cout<<cricketers[i].averageScore<<endl;
        cout<<endl;
    }
   
}