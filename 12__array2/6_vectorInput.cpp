#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*vector<int> v(5,7);      //  initial size = 5 and each element = 7 
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;;
    cout<<v[0];*/

    vector<int> v(5);

    for(int i = 0; i<5;i++){
        cin>>v[i];  // input
    }
    for(int i= 0; i<5;i++){
        cout<<v[i]<<" ";   // output
    }
}