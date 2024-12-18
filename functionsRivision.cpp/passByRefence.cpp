#include<iostream>
using namespace std;

void maketwice(int p){
    p =p*2;
}

int main(){
    int p = 19;
    maketwice(p);
    cout<<p;
}