#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    // push, pop, front(= top in stack), size,empty, back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<q.front()<<endl; // 10
    cout<<q.back();

    q.pop();
    cout<<endl;
    cout<<q.front()<<endl;;

    cout<<q.size()<<endl;
    
}