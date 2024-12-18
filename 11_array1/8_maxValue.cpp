// find themaximum value out of all the elements in the array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    //input
    for(int i= 0; i<=n-1;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i =1;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;
}

