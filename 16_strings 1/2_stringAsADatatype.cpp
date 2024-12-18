#include<iostream>
#include<string>    // in my case ,not necessary to write.
using namespace std;
int main(){
    string str = "Suvesh Pandey";
    cout<<str;
    cout<<endl;
    // taking input 
    string s;
    //cin>>s;  // no space and enter shoud be written . otherwise only first string will print.
    getline(cin,s);
    cout<<s;
}
