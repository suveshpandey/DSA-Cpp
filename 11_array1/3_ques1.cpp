// given an array of marks of students, if the marks of any student is less than
// 35,print its roll no [roll no here refers to the index of the array.]


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of students: ";
    cin>>n;
    int marks[n];     // 0 to n-1
    // input of marks
    cout<<"Enter the marks: ";
    for(int i = 0; i<=n-1;i++){
        cin>>marks[i];
    }
    // output
    for(int i = 0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}