//Input a string and return the number of substrings that contain only vowels.
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;

    int ans = 0, len = 0;
    for(int i = 0;i<(int)s.length();i++){
        if(s[i] == 'a'  || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            len++;
        }
        else{
            ans = len*(len+1)/2;
            len = 0;
        }
    }
    ans += len*(len+1)/2;
    cout<<ans;
    
}