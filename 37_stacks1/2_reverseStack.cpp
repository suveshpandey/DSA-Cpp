#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // empty st int temp:-
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    // empty temp int temp2:-
    stack<int> temp2;
    while(temp.size()>0){
        temp2.push(temp.top());
        temp.pop();
    }
    // empty temp2 into st:-
    cout<<endl;
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    cout<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}