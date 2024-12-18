// move all zeros to the end of the array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 6, 0, 7, 6, 0, 9, 1};
    int n = 8; // array size
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == 0){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}