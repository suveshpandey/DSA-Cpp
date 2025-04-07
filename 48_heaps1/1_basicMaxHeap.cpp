// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     // priority_queue<int> pq;   //max pq
//     priority_queue<int, vector<int>, greater<int>> pq;   //min pq
//     pq.push(10);
//     pq.push(20);
//     pq.push(30);
//     pq.push(40);

//     cout<<pq.top()<<endl;
//     pq.pop();
//     cout<<pq.top();

// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {10, 20, -4, 6, 8, 105, 118, 110};
    int n = 8;
    int k = 3;
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i = 0; i<n; i++){
        pq.push(nums[i]);
        if(pq.size() > k) pq.pop();
    }
    cout<<pq.top();
}