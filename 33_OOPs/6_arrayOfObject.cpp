#include<iostream>
using namespace std;
class player{
    public:
    int age;
    int score;
    int health;
};
int main(){
    player suvesh;
    player sameer;
    player sp;

    suvesh.age = 18;
    sameer.age = 15;
    sp.age = 18;
    player players[3] = {suvesh, sameer, sp};

    cout<<players[0].age<<endl;
    cout<<players[1].age<<endl;
    cout<<players[2].age;

}