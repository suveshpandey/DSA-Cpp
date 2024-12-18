/*WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    int originalNum = num;
    cout<<originalNum<<endl;
    
    int reverseNum = 0;
    while(num>0){
        int digit = num%10;//1234
        reverseNum = reverseNum*10 + digit;
        num /= 10;
    }
    cout<<reverseNum<<endl;

    int result = originalNum + reverseNum;
    cout<<result;
}