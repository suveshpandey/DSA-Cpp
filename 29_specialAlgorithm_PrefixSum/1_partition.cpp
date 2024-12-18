#include<iostream>
using namespace std;
int main(){
    //int arr[] = {1,2,3,4,5,6,7,8,9,10,1,12,13};  // no
    int arr[] = {1,2,3,4,5,5,10};                 // yes
    int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum
    for(int i= 1; i<n;i++){
        arr[i] += arr[i-1];
    }
    // check if any x exist;
    int idx = -1;
    for(int i= 1; i<n;i++){
        if(2*arr[i] == arr[n-1]){
            idx = i;
            break;
        }
    }
    if(idx != -1) cout<<" Yes, it can be partitioned at "<<idx<<"'th index. ";
    else cout<<"It cannot be partitioned.";

}