#include<iostream>
using namespace std;
int hcf(int a, int b){  // TC = O(n) or O(min(a,b))
    for(int i = min(a,b); i>=2;i--){
        if(a%i == 0 and b%i == 0) return i;
    }
    return 1;
}
int main(){
    int a = 24;
    int b = 60;
    cout<<hcf(a,b);   
}
