#include<iostream>
using namespace std;
class Stack{
    int arr[5];
    int idx;  // = -1;
    public:
    Stack(){
        idx= -1;
    }
    
    void push(int val){
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx == -1){
            cout<<"stack is empty!";
            return;
        }
        idx--;
    }
    int top(){
        if(idx == -1){
            cout<<"stack is empty!"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i= 0; i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;;
    st.display();
}