#include<iostream>
using namespace std;

bool check_odd(int num){
   if(num%2 != 0){
    return true;
   }
   else{
    return false;
   }
}

int main(){
    int x, y;
    cout<<"Enter the 1st number: ";
    cin>>x;

    cout<<"Enter the 2nd number: ";
    cin>>y;
    
    for(int i = x;i<=y;i++){
        if(check_odd(i)){
            cout<<i<<" ";
        }
        
    }

}