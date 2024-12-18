#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int damage;
    int scope;

    
};
class player{
    class Helmet{
        int hp;
        int level;

        public:
        void  setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }

        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

    
public:
// getter
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
    Gun getGun(){
        return gun;
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
    void setGun(Gun gun){
        this-> gun = gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health=  0;
        if(level == 1) health= 25;
        else if(level == 2) health = 50;
        else if(level == 3) health  =100;
        else cout<<"error, invalid level!";
        helmet->setHp(health);
        this->helmet = *helmet;

    }
    void getHelmet(){
        cout<<helmet.getHp();
        cout<<endl;
        cout<<helmet.getLevel();
        cout<<endl;
    }
};
int mian(){

    player suvesh;
    suvesh.setHealth(100);

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    suvesh.setGun(akm);
    Gun gun123 = suvesh.getGun();
    cout<<gun123.damage;
    cout<<endl;
    cout<<gun123.ammo;
    cout<<endl;
    cout<<gun123.scope;
    cout<<endl;

    suvesh.setHelmet(2);
    suvesh.getHelmet();
    
    

}