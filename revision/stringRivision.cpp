#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   
   string str;
   getline(cin,str);
   cout<<str<<endl;
   //reverse(str.begin(), str.end());
   //cout<<str<<endl;
   cout<<str.substr(0,4);
   cout<<endl;

   string str1 = "suvesh";
   string str2 = " pandey";

   string str3 = str1+str2;
   cout<<str3<<endl;

   int num = 123;

   string str4 = to_string(num);
   str4 += "4";
   cout<<str4<<endl;
   


}