#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

   /* v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;

    for(int i = 0;i<5;i++){
        cout<<v[i]<<" ";
    } */

    for(int i = 0; i<100;i++){
        v.push_back(i+1);
        cout<<"Capacity: "<<v.capacity()<<endl;
        cout<<"Size :"<<v.size()<<endl;
        cout<<"Element: "<<v[i]<<endl;
        cout<<endl;
    }
    
}
