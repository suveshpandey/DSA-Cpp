
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    // string str;
    // for(int i = 0;i<s.length();i++){
    //     if(s[i]>= 'X'){
    //         str.push_back(s[i]);
    //     }
    // }
    // // sort(str.begin(), str.end());
    // for(int i = 0;i<str.length()-1;i++){
    //     for(int j = 0;j<str.length()-1;j++){
    //         if(s[j]<s[j+1]){
    //             swap(s[j], s[j+1]);
    //         }
    //     }
    // }
    // cout<<str;

    int arr[] = {5,0,1,2,0,0,4,0,3};
    int n = 9;
    for(int i= 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j+1] == 0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}