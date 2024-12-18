#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int> pq;   //max pq
    priority_queue<int, vector<int>, greater<int>> pq;   //min pq
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();

}
