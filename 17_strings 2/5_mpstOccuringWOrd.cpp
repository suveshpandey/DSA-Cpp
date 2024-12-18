#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str = "suvesh is a very good coder. he is a good student as well";
    stringstream ss(str);
    string temp;
    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
    // vector print
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    // vector print
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}