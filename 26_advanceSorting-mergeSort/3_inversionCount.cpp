#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,1,8,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr, arr+n);

    for(int i = 0 ;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int count= 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1; j<n;j++){
            if(v[i]>v[j]){
               count++;
            }
        }
    }
    cout<<count<<" ";
}