// wap to check if a number is prime or not?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number here: ";
    cin>>n;

    bool flag = true;  // true means prime
    for(int i = 2;i<=n-1; i++){
        if(n%i == 0){
            flag = false; // false means composite
            break;
        }
        //1 2 3 4 5 6 10 12 15 20 30 60
    }
    if(n == 1) cout<<"1 is neither prime nor composite";
    else if(flag = true) cout<<n<<" is prime";
    else cout<<n<<"is composite";
    
    
}