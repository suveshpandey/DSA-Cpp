//Input a string of length n and count all the consonants in the given string.
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;

    int count = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
            count++;
        }
    }
    cout<<count;
}