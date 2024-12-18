//Given an array of integers, change the value of all odd indexed elements to its second multiple
//and increment all even indexed values by 10.
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
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<n;i++){
        if(i%2 == 0){
            arr[i] = arr[i]+10;
        }
        else{
            arr[i] = 2*arr[i];
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // input = 1  2  3  4  5
    // output= 11 4  13  8  15
}