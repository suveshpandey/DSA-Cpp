#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not mention the size.

    // inserting / do not use []
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
 
    // if you want to update / access  you can sue []
    v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<endl;

    cout<<v.size();

    
}
   
   
