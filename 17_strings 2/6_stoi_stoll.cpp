#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "123456";
    int x = stoi(str);
    cout<<x<<endl;

    long long y = stoll(str);
    cout<<y;
}