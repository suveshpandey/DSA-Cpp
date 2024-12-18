#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int i,n;
    cin>>i>>n;
    cout<<endl;
    print(i,n);
}