//method 1 - using extra variable:-
#include<iostream>
using namespace std;
int main(){
    /*int n;
    cout<<"Enter the No of lines: ";
    cin>>n;
    int a = 5 ;  // a ko kuchh bhi value de sakte hain.
    for(int i = 1; i<=n ;i++){
        if(i%2 == 0) a = 0;    // row no even
        else a = 1;     // row no odd
        for(int j = 1 ; j<=i; j++){
            cout<<a;
            //flipping
            if(a == 1) a = 0;
            if(a == 0) a = 1;

        }
        cout<<endl;
    }*/


    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            if((i+j)%2 == 0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }


}

