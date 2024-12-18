#include<iostream>
using namespace std;
bool check_prime(int num){
    for(int i = 2; i<=(num-1);i++){
        if(num%i == 0)  return false;
    
    }return true;
}

int main(){
    int a = 1;
    int b = 10;
    for(int i=a; i<=b;i++){
        if(check_prime(i)){
            cout<<i<<" ";
         }
    }
}