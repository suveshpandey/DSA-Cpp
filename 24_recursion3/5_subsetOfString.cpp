#include<iostream>
#include<string>
#include<vector>
using namespace std;
 /* void printSubset(string ans , string original){
    if(original == ""){
        cout<<ans<<" , ";
        return;
    }
    char ch = original[0];
    printSubset(ans+ch, original.substr(1));
    printSubset(ans, original.substr(1));
}
int main(){
    string str= "abc";
    printSubset("", str);
}         */
// by making a vector
void printSubset(string ans , string original,  vector<string>& v){
    if(original == ""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    printSubset(ans+ch, original.substr(1), v);
    printSubset(ans, original.substr(1), v);
}
int main(){
    string str= "abc";
    vector<string> v;
    printSubset("", str, v);

    for(string ele : v){
        cout<<ele<<" , ";
    }
}            