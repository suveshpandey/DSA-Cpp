#include<iostream>
using namespace std;
int main(){
      /* //int arr[3][3];
    int arr[3][3] = {{1,2,3},{4,5,6},{6,7,8}}; // same
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};    // same
    // rows = 3 -> 0 to 2 index
    // columns = 3 -> 0 to 2 index
    
    //cout<<arr[0][1]<<endl;    // will give garbeg values
    //cout<<arr[0][1]<<endl;    // will give garbeg values
    
    //arr[0][0] = 1;
    cout<<arr[0][1]<<endl;
    cout<<arr[1][2]<<endl; */


    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i<=2;i++){
        for(int j = 0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}