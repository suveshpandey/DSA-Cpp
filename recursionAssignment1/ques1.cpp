//  Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.
#include<iostream>
using namespace std;
int sum(int firstno, int lastno){
    if(firstno>lastno) return 0;
    if(firstno % 2 == 0) return sum(firstno+1, lastno);
    return firstno + sum(firstno+2, lastno);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
}