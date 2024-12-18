#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;
    int nsp =1;
    
    int m = n-1; // enw lines

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m+1-i; j++){
            cout<<"*";
        }
        // spaces
        for(int k = 1; k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
         // spaces
        for(int j = 1; j<=m+1-i; j++){
            cout<<"*";
        
    }
    cout<<endl;

}
}