#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string original,bool flag){
    if(original == ""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length() == 1){
        storeSubset(ans, original, substr(1), true);
        storeSubset(ans+ch, original, substr(1)),true;
    }
    char dh = original[1];
    if(ch == dh){
        if(flag == true) storeSubset(ans, original.substr(1),v,true);
        storeSubset(ans+ch, original.substr(1),v,false);
    }

}

int main(){
    string str = "aab";
    vector<string> v;
    storeSubset("", str, v, true);
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<endl;
    }
}       