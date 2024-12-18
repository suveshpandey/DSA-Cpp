//Find the second largest element in the given Array in one pass.
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
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0; i<n;i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
            }
        else{
            if(arr[i]>max2 && arr[i]<max){
                max2 = arr[i];
            }
        }
    }
    cout<<max2;
}