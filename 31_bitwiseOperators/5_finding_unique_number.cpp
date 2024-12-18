#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,2,1,3,4,5,4};
    int n = 9;
    int result = 0;
    for(int i = 0;i<n;i++){
        result = result ^ arr[i];
    }
    cout<<result;
}
// XOR(^) is a commutative property;
// => 1^2^3 = 1^3^2 = 2^1^3 and all.