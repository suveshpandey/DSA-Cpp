//1 - Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int x ;
    cout<<"Enter the desired number: ";
    cin>>x;
    int count = 0;
    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(arr[i]+arr[j] == arr[k]){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
