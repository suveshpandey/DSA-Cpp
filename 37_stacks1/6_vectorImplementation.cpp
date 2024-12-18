#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int> v;    // no overflow condition
    public:
    Stack(){
    }
    
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size() == 0){
            cout<<"stack is empty!"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size() == 0){
            cout<<"stack is empty!";
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
using namespace std;
int main(){
    Stack st;
    //cout<<st.top()<<endl;
    st.push(10);    
    st.push(20);    
    st.push(30);    
    st.push(40);  

    cout<<st.size()<<endl; 
    cout<<st.top()<<endl;
}