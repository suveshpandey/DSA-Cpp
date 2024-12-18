//Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
int printSquare(int n){
    for(int i = 0;i<=n;i++){
        cout<<i<<"x"<<i<<" = "<<i*i;
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;

    printSquare(n);
    
}