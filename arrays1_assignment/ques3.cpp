// 2- Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int mian(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    for(int i = 0;i<n-1;i++){
    cout<<"Enter the elements: ";
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 1;i<=n-1;i++){
        if(min>arr[i])  min = arr[i];
    }
    cout<<"The minimum element = "<<min;

}
// wrong