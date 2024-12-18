// WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int lastDigit = 0;
    int sum = 0;
    while(n>0){
        lastDigit = n%10;
        sum+= lastDigit;
        n/= 10;
    }
    cout<<sum;

}