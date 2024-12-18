//If an array arr contains n elements, then check if the given array is a palindrome or not .
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
    bool ispalindrome = false;
    for(int i = 0; i<n/2;i++){
        for(int j = n-1;j>=n/2;j--){
            if(arr[i] == arr[j]){
                ispalindrome = true;
            }
        }
    }
    if(ispalindrome ){
        cout<<"yes it is a palindrome.";
        
    }
    else{
        cout<<"no";
    }
}