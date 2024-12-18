//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number here: ";
    cin>>n;

    for(int i = 1; i<=n; i = i+3){
        cout<<i<<endl;
    }

}