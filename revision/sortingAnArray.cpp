// using bubbled sorting
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //output
    cout<<"Unsorted array -> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //sorting
    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int  temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // sorted array output
    cout<<endl;
    cout<<"Sorted array -> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}