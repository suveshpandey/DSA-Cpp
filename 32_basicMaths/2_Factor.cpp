#include<iostream>
#include<cmath>
using namespace std;
void factors(int n){          // tc = O(n)
    for(int i = 1;i<=n;i++){
        if(n%i == 0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
void factors2(int n){
    for(int i = 1;i<sqrt(n);i++){
        if(n%i == 0) cout<<i<<" ";
    }
    for(int i = sqrt(n);i>=1;i--){
        if(n%i == 0) cout<<n/i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    factors(n);
    factors2(n);
}