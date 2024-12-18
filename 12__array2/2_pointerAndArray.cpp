#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,2,4,5};
    int* ptr = arr;
    cout<<ptr<<endl;  // same  giving address
    cout<<&arr[0]<<endl;   // same
    cout<<ptr[0]<<endl;
    // ptr[0] = 8;   1 will be changed to 8
    for(int i = 0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
}
