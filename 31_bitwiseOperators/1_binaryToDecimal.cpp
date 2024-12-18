#include<iostream>
using namespace std;
int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i = n-1; i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';
        result = result + num*(1<<(n-i-1));  // here (1<<(n-i-1)) is 2 to the power something.
    }
    return result;
}
int main(){
    string binary;
    cout<<"Enter the binary numbers: ";
    cin>>binary;
    cout<<binary<<" in decimal = ";
    cout<<binary_to_decimal(binary);
}