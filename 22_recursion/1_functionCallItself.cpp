#include<iostream>
using namespace std;
void gm(int n){
    if(n == 0)return;
    cout<<"Good Morning!";
    cout<<endl;
    gm(n-1);
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    gm(n);
    
}