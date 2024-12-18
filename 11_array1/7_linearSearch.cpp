// Find the element x in the array.Take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    // input
    for(int i = 0; i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;
    // search
    // checkmark flag
    bool flag = false;  // not present
    for(int i = 0;i<=n-1;i++){
        if(arr[i] == x)  flag = true;

    }
    if (flag == true) cout<<"Element found.";
    else cout<<"Element not found.";
}