// wap to chaeck if  number is composite or not?
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number here: ";
    cin>>x;
    for(int i = 2; i<=x-1; i++){
        if(x%i == 0){
            cout<<x<<" is a composite number."<<endl;
            break;
        }
    }
}