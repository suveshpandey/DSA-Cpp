/* Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers. */
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
int i, key, j;
for (i = 1; i < n; i++){
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key){
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
int main() {
int arr[5]={7,2,32,5,20};
int N=5;
insertionSort(arr,N);
int a = 0, b = 0;
}