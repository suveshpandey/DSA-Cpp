// print the factorial of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int product = 1;
    for(int i = 1; i<=n; i++){
        product *= i;
        }
        cout<<product;
}