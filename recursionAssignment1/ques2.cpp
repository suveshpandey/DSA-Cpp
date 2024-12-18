//Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
//steps at each level.
#include<iostream>
using namespace std;
int findNoOfWays(int n){
    if(n<0) return 0;
    if(n == 0) return 1;
    return findNoOfWays(n-1)+ findNoOfWays(n-2) + findNoOfWays(n-3);

}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<findNoOfWays(n);
}