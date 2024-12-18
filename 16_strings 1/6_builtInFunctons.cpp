#include<iostream>
#include<string>
using namespace std;
int main(){
    //string str = "suvesh pandey is sp the don";
    // cout<<str.size();

   /* string str  = "abcd";
    str.push_back('e');
    str.push_back('f');
    str.push_back('g');
    cout<<str<<endl;

    str.pop_back();
    str.pop_back();
    str.pop_back();
    cout<<str; */

   /* string s = "sbc";
    string t = "def";
    s  = s+t; // same
   // s = s+"def"; // same
    cout<<s<<endl; */

    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin(),s.end()); //fedcba
    reverse(s.begin()+2,s.end()); //abfedc
    reverse(s.begin()+2,s.end()-1); //abedcf
    cout<<s;
}.