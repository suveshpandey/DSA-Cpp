//Check if the given array is sorted or not
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    bool sorted = true;
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n;j++){
            if(arr[i]>arr[j]){
                sorted = false;
            }
        }
    }
    if(sorted) cout<<"yes sorted";
    else cout<<"not sorted";
}