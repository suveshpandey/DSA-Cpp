#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";   
        temp.push(st.top());
        st.pop();
    }                           
    cout<<endl;
    // putting elements back from temp to st
    while(temp.size()>0){
        //cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()>0){
        //cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtIdx(stack<int>& st, int idx, int val){
    stack<int> temp;
    while(st.size()>idx){
        //cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    st.push(val);      
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    pushAtBottom(st, 80);
    print(st);

    pushAtIdx(st, 2, 90);
    print(st);
}