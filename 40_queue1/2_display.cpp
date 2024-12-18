#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i = 1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue<int>& q){
    stack<int> st;
    // empty of queue into stack
    int n = q.size();
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }

    // empty the stack into queue
    while(st.size()>0){
        int t = st.top();
        st.pop();
        q.push(t);
    }
    cout<<endl;


}

void removeEven(queue<int>& q){
    int n = q.size();
    for(int i = 0;i<n;i++){
        // even
        if(i%2 == 0){
            q.pop();
        }
        // odd
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    display(q);
    reverse(q);
    display(q);
    removeEven(q);
    display(q);

}