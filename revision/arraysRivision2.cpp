#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int>  v(n);

    cout<<"Enter the elements: ";
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i = 0, j = n-1;
    while(i<j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
    for(int i = 0 ;i<n;i++){
        cout<<v[i]<<" ";
    }
}