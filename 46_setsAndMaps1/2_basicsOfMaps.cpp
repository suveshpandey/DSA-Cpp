#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int  > m;   
    //m.insert("suvesh",11);  //wrong
    /*
    pair<string,int> p1;
    p1.first = "suvesh";
    p1.second = 11;
    m.insert(p1);

    pair<string,int> p2;
    p2.first = "sameer";
    p2.second = 12;
    m.insert(p2);

    pair<string,int> p3;
    p3.first = "sp";
    p3.second = 15;
    m.insert(p3);

    //for(auto p:m){  // can also be used
    for(pair<string,int>p : m){
        cout<<p.first<<"->"<<p.second<<endl;
    }
    */

    // other method of insertion
    m["Suvesh"] = 11;
    m["sameer"] = 12;
    m["sp"] = 15;
    for(pair<string,int>p : m){
        cout<<p.first<<"->"<<p.second<<endl;
    }
    cout<<m["sp"];

    //delete
    m.erase("sp");
}
