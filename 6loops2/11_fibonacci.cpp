// print the nth fibonacci number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int a = 1, b = 1 , sum = 0;

//     for(int i = 1; i<=n-2; i++){
//         sum = a+b;
//         a = b;
//         b = sum;
//     }
//     cout<<b;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 1, b = 1;

    cout << "Fibonacci Series: " << a << ", " << b; // Printing the first two terms

    for (int i = 1; i <= n - 2; i++) {
        int sum = a + b;
        cout << ", " << sum; // Print each new term
        a = b;
        b = sum;
    }

    return 0;
}
