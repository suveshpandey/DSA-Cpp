//Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
//0-based indexing.

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s;
    cout<<endl;

    for(int i = 0;i<s.size();i++){
        if(i%2 != 0){
            s[i] = '#';
        }
    }
    cout<<s;
}