// find the last occurence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(12);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(0);

    int x= 20;   // 4th index output
    // int x = 60    -1 output
    int idx = -1;
    for(int i = 0;i<v.size();i++){
        if(v[i] == x)  idx = i;

    }
    for(int i = v.size()-1;i>=0;i--){
        if(v[i] == x)
        idx = i;
        break;
    }
    cout<<idx;
}