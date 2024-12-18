#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    // setter
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }
    //getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    player suvesh;
    // bad approach
    //suvesh.score = 100;
    //suvesh.health = 85;

    // use of setter
    suvesh.setScore(10);
    suvesh.setHealth(90);

    // use of setter
    cout<<suvesh.getScore();
    cout<<endl;
    cout<<suvesh.getHealth();
}