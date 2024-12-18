#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    vector<int> arr;
    Queue(int val){
        f = 0;
        b = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(b == arr.size()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(f-b == 0){
            cout<<"Queue is empty"<<endl;
            return ;
        }
        f++;
    }
    int top(){
        return arr[f];
    }
    int back(){
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(f-b == 0){
            return true;
        }
        else return false;
    }
    void display(){
        for(int i = f; i<b;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    Queue q(5);
    //queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.display();

    q.push(50);
    q.push(60);

    q.display();
    q.pop();
    q.display();
}