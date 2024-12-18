#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s =0, e = n;
    while(s<=e){
       int mid = (s+e)/2;
       if(arr[mid] == key) return mid;
       else if(arr[mid]>key) e = mid-1;
       else s =mid+1;  // when arr[mid]<key
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // sorting
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // sorted array
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter the desired key: ";
    cin>>key;
    cout<<binarySearch(arr, n, key);
}
// tc = O(logn)