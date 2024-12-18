//Q4: Write a function to count the number of digits in a number
//    and then print the square of this number.
#include<iostream>
#include<vector>
using namespace std;
int squareOfDigits(int number){
    cout<< number*number;
}
int countNoOfDigits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n/10;
    }
    return count;
}
int main(){
    int n;
    cin>>n;

    int number = countNoOfDigits(n);
    squareOfDigits(number);
    
    
}