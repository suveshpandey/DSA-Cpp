#include<iostream>
using namespace std;
int stair(int n){
    // if(n == 3) return 4;    for three steps as well
    if(n == 2) return 2;
    if(n == 1) return 1;
    return stair(n-1) + stair(n-2); // + stair(n-3);
}
int main(){
    cout<<stair(5);    //  no of  ways.
}