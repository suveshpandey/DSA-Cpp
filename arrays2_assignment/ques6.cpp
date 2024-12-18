//Find the unique number in a given Array where all the elements are being repeated twice with one
//value being unique.
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
    int uniqueNumber = INT_MIN;
    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(i != j && arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 0) {
            uniqueNumber = arr[i];
            break;
        }
        
    }
    cout<<"unique number = "<<uniqueNumber;
    return 0;
}


