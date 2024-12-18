#include<iostream>
using namespace std;
int partition(int arr[], int si,int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i = si+1;i<=ei;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count +si;
    swap(arr[si], arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx and j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]> pivotElement) j--;
        else if(arr[i] > pivotElement && arr[j]<= pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
  

int kthsmallest(int arr[], int si, int ei, int k){
    int pi = partition(arr, si, ei);
    if(pi+1 == k) return arr[pi];
    else if(pi + 1 <k) return kthsmallest(arr, pi+1, ei, k);
    else return  kthsmallest(arr, si, pi-1, k);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
    cout<<kthsmallest(arr, 0,n-1,k);
   
}