#include<iostream>
using namespace std;
int fact(int x){
    int f  = 1;
    for(int i = 2; i<=x; i++){
        f *=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int r;
    cout<<"Enter r: ";
    cin>>r;

    int nfact = fact(n);
    int rfact = fact(r);
    int  nrfact = fact(n-r);
    
    int ncr = nfact/(rfact * nrfact);
    cout<<ncr;

}