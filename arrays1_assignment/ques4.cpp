//Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0; i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1; j<n;j++){
            if(arr[i] == arr[j]){
                cout<<"yes, duplicate present.";
                return 0;
            }
        }
    }
    cout<<"duplicate not present.";
}
