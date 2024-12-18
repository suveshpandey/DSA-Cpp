//Input a string and concatenate with its reverse string and print it.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    cout<<str<<endl;

    string temp = str;
    reverse(temp.begin(), temp.end());

    string newstr = str+temp;
    cout<<newstr;
}
