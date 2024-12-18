#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 0; i<n; ++i){
        for(int j = 0; j< n-i-1;++j){
            cout<<" ";
        }
        for(int j = 1; j<=i+1; ++j){
            cout<<(char)('A' + j - 1)<<" ";
        }
        cout<<endl;
    }
}