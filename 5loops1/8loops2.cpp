#include<iostream>
using namespace std ;
int main(){
    // AP = 3,7,10,14...
   int a = 4;
   int n;
   cout<<"Enter a number: ";
   cin>>n;
    for(int i = 1; i <=n;i++){
        cout<<a<<endl;
        a = a + 3;
    }


}