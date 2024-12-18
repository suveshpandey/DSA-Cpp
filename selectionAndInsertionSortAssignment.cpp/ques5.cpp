/*Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
and display the sorted array.*/
#include<iostream>
#include<cstring>
using namespace std;
int main() {
char arr[][20] = {"physicswallah", "quiz", "practice", "pwskills","coding" };
int n = sizeof(arr) / sizeof(arr[0]);
char temp[20];
for (int i = 0; i < n ; i++) {
for (int j = 0; j < n - 1 - i; j++) {
if (strcmp(arr[j], arr[j + 1]) > 0) {
strcpy(temp, arr[j]);
strcpy(arr[j], arr[j + 1]);
strcpy(arr[j + 1], temp);
}
}
}
for (int i = 0; i < n; i++) {
cout<<arr[i]<<endl;
}
return 0;
}