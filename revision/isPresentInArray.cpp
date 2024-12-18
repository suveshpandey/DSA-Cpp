#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<endl;
    cout<<"Enter the desired number: ";
    cin>>x;
    //int pos;
    int count = 0;
    for(int i = 0 ; i<n;i++){
        if(arr[i] == x){
            cout<<x<<" is present in the array.";
            //pos++;
            count++;
            break;
        }
    }
    if(count == 0){
        cout<<x<<" is not present in the array.";
    }
}