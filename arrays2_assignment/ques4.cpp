//Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.
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
    int evenSum = 0;
    int oddSum = 0;
    for(int i = 0;i<n;i++){
        if(i%2 == 0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    cout<<"even indices sum = "<<evenSum<<endl;
    cout<<"odd indices sum = "<<oddSum<<endl;
    // difference
    int differene = evenSum-oddSum;
    cout<<"the difference is = "<<differene;


    // input = 1 2 3 4 5 6 
    // output = even indices  sum = 9
    //          odd indices sum = 12
    //          difference = -3
}