/*Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
array. If no such integer exists that satisfies the above condition then return -1.*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_k_for_sorted_array(vector<int>& arr) {
    // If the array has less than 2 elements, it's already sorted
    if (arr.size() < 2) {
        return -1;
    }

    // Copy the original array to sort and compare
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    // Check each possible value of K
    for (int k = 0; k <= 100000; ++k) { // You can adjust the range based on the problem constraints
        // Replace each element in arr with |ai - K|
        vector<int> modified_arr(arr.size());
        for (size_t i = 0; i < arr.size(); ++i) {
            modified_arr[i] = abs(arr[i] - k);
        }

        // Check if modified_arr is equal to the sorted_arr
        if (modified_arr == sorted_arr) {
            return k;
        }
    }

    // If no such K is found
    return -1;
}

int main() {
    // Example usage:
    vector<int> arr = {4, 2, 1, 3, 4, 1, 3, 2, 4};
    int result = find_k_for_sorted_array(arr);
    
    if (result != -1) {
        cout << "The value of K is: " << result << endl;
    } else {
        cout << "No such integer exists." << endl;
    }

    return 0;
}
