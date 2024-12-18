//display this AP 1,23,57,9,.... "n" terms
// method 1 -using maths
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =1; i <= 2*n-1; i+=2 ){
        cout<<i<<endl;
    }


}