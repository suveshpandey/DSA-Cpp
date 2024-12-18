//Q4: Find the output of the following code snippet.
#include<iostream>
using namespace std;
int main(){
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
}

// ans = get the value of b