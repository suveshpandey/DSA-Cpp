#include<iostream>
using namespace std ;
int main(){
    // GP = 1, 2, 4, 8, 16 ...
   int a = 1;
   int n;
   cout<<"Enter a number: ";
   cin>>n;
    for(int i = 1; i <=n;i++){
        cout<<a<<endl;
        a = a*2;
    }


}