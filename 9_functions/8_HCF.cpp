#include<iostream>
using namespace std;
int gcd(int a, int b){        // gcd = greatest common divisor
    int hcf = 1;
    for(int i = 1; i<=min(a,b); i++){
        if(a%i == 0 and b%i == 0){       // i is a common factor
            hcf = i;
        }
    }
    return hcf;
}

int main(){
    int a,b;
    cout<<"Enter the 1st number: ";
    cin>>a;

    cout<<"Enter the 2nd number: ";
    cin>>b;

    cout<<gcd(a,b);
}
