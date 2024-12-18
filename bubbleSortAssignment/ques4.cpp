// ques 4 = Sort the array in descending order using Bubble Sort.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,1,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
