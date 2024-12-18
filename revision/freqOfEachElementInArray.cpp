#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    // input
    cout<<"Enter the elements: ";
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    // output
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int maximum = 0;
    for(int i = 0;i<n;i++){
        maximum = max(maximum, arr[i]);
    }
    int frequency[maximum+1] = {0};
    for(int i= 0;i<n;i++){
        frequency[arr[i]]++;
    }
    cout<<endl;
    for(int i = 0;i<maximum+1;i++){
        if(frequency[i]!=0){
            cout<<i<<" -> "<<frequency[i]<<endl;
        }
    }
}