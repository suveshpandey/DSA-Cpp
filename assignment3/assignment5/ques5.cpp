//Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number here: ";
    cin>>n;

    for(int i = 3;i<=n; i = i*4){
        cout<<i<<endl;
    }
}
