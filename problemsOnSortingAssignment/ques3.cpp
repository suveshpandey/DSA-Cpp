/*Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.*/
#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {3,2,1,7,6,8,5,9,4};
    int n = 9;
    int k;
    cin>>k;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<k;i++){
        int min = arr[i];
        int mindx = i;

        for(int j = i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
            swap(arr[i], arr[mindx]);
        }
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1];
    
}