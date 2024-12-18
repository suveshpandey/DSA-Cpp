// 2 ki power just saller than the given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int temp = 0;
    while(n!=0){
        temp = n;
        n = n&(n-1);
    } 
    cout<<temp;
}
// note for 2 ki power just greater than the given number -> 2 x temp.