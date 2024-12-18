// using linear search
#include<iostream>
using namespace std;
int findIdx(int arr[], int n, int ele){
    for(int i = 0;i<n;i++){
        if(arr[i] == ele){
            cout<<"index = ";
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the desired element: ";
    cin>>ele;

    
    cout<<findIdx(arr, n, ele);
}
//tc = O(n)