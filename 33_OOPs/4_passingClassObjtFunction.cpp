#include<iostream>
#include<algorithm>
using namespace std; 
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    // setter
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age= age;
    }
    void setScore(int score){
        this->score =  score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
};
int addScore(player a, player b){
    return a.getScore()+b.getScore();
}
player getMaxScorePlayer(player a, player b){
    if(a.getScore()>b.getScore()){
        return a;
    }
    else return b;
}
int main(){
    player suvesh; // object creation statically
    player sameer; // compile time or static allocation

    player *jyoti = new player; // run time or dynamic allocation
    player jyotiObject = *jyoti;

    suvesh.setAge(18);
    suvesh.setScore(100);
    suvesh.setIsAlive(true);
    suvesh.setHealth(70);

   

    sameer.setAge(16);
    sameer.setScore(20);
    sameer.setIsAlive(true);
    sameer.setHealth(100);
    cout<<addScore(suvesh, sameer);
    cout<<endl;
    getMaxScorePlayer(suvesh, sameer);
    player sp = getMaxScorePlayer(suvesh, sameer);
    cout<<sp.getScore();
    cout<<endl;

    // jyotiObject.setScore(10);
    // cout<<jyotiObject.getScore();
    //or
    jyoti->setScore(10);
    cout<<jyoti->getScore();
}

