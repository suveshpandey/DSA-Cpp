//WAP to find the smallest missing positive element in the sorted Array that contains only
//positive elements.
#include <iostream>
#include <vector>
using namespace std;
int findSmallestMissing(const vector<int>& arr) {
    int n = arr.size();
    // Iterate through the array
    for (int i = 0; i < n; ++i) {
        // If the current element is not equal to its index + 1
        if (arr[i] != i + 1) {
            return i + 1;  // Return the smallest missing positive element
        }
    }

    // If all elements are in order, return the next positive integer
    return n + 1;
}
int main() {
    // Input sorted array from the user
    int size;
    cout << "Enter the size of the sorted array: ";
    cin >> size;

    vector<int> sortedArray(size);
    cout << "Enter the sorted array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin>>sortedArray[i];
    }
    // Find the smallest missing positive element
    int result = findSmallestMissing(sortedArray);

    // Output the result
    cout << "The smallest missing positive element is: " << result << endl;

    return 0;
}
