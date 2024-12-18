//Check if the given array is almost sorted. (elements are at-most one position away).
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,1,5,4};
    int n = 5;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        for(int j  =i+1;j<n;j++){
            if(arr[i]>arr[j])cout<<"no";
            break;
        }
    }
    cout<<endl;
    int i;
    for(i = 0;i<n;i++){
        if(arr[i]<arr[i+1]){
            cout<<"yes";
            break;
        }
    }
    
}