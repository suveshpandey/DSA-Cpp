#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1);

    s.erase(2); 


    int target= 4;
    //s.find()=> it searches in the set, and if 
    //it is not present, then it returns the last element.
    if(s.find(target) != s.end()){ //=> target exists
    cout<<"yes present"<<endl;
    }
    else cout<<"does not exist."<<endl; 
    cout<<s.size()<<endl;

    for(int ele: s){
        cout<<ele<<" ";
    }
}
