#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);

    for(int ele :s){
        cout<<ele<<" ";
    }

    cout<<endl;

    map<string,int>m;
    m["suvesh"] = 76;
    m["sp"] = 10;
    m["jyoti"] = 52;
    for(auto x:m){
        //cout<<x.first<<" ";
        cout<<x.first<<" ";
    }


}