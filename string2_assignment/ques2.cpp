//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include<iostream>
#include<algorithm>
using namespace std;
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string consisting of digits from '0' to '9': ";
    cin >> input;

    char firstMax = '\0';  // Initialize to null character
    char secondMax = '\0';

    for (char digit : input) {
        if (isdigit(digit)) {
            if (digit > firstMax) {
                secondMax = firstMax;
                firstMax = digit;
            } else if (digit < firstMax && digit > secondMax) {
                secondMax = digit;
            }
        }
    }

    if (secondMax != '\0') {
        cout << "The second-largest digit is: " << secondMax << endl;
    } else {
        cout << "No second-largest digit found." << endl;
    }

    return 0;
}
