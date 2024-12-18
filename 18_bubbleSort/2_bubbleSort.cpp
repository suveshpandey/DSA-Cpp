#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,4,6,3,2,1};
    int n =  6;

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    // bubble sort
    // for(int i = 0; i<n-1;i++){   // n-1 passes
    //     // traverse
    //     for(int j = 0;j<n-1-i;j++){
    //         if(arr[j]> arr[j+1]){  // swap
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // } 

    // bubble sort optimised
    for(int i = 0; i<n-1;i++){   // n-1 passes
        //traverse
        bool flag  =true;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]> arr[j+1]){  // swap
                swap(arr[j], arr[j+1]);
            }
        }
        if(flag == true){// swap didn't happen
        break;
        } 
    }
    cout<<endl;
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}