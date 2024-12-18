#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10, 20, -4, 5, 18, 24, 1, -7, 56}; //can do cin
    int k = 4;                                       // can do cin\]
    int n = (sizeof(arr)/sizeof(arr[0]));
    priority_queue<int> pq; // heap

    for(int i = 0; i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();

}

//tc = O(n*logk)
//sc = O(n)
//as = auxiliary space = extra used space = O(k)