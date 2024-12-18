#include<iostream>
using namespace std;
int main(){
    //char str[5] = {'a','b','c','d','e'};
    /*char str[5] = "abcd";
    for(int i = 0;i<5;i++){
        cout<<str[i]<<" ";
    }*/
    char str[] = {'a','b','c','d','e','f'};
    // char str[] = {'a','b','\0',c','d','e','f'}; = ab -output
    
    for(int i = 0;str[i]!= '\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str<<" ";
    
}