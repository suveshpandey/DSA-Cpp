#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(5);

    // cout<<v[0]<<endl; // same
    // cout<<v.at(0);    // same

    for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";     // normal output
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;  

}