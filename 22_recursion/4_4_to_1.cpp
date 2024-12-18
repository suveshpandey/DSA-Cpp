#include<iostream>
using namespace std;
void print(int n){
    // base case
    if(n == 0) return;
    // recursive call
    cout<<n<<endl;
    print(n-1);
}
int main(){
    print(10);
}