#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    // abcdefgh -> n = 8
    int n = str.length();
    cout<<n<<endl;
    cout<<str.substr(n/2);
}