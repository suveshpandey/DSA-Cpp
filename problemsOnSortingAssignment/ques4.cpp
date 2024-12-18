/*Find the minimum operations required to sort the array in increasing order. In one operation ,
you can set each occurrence of one element to 0.*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int min_operations_to_sort(vector<int>& arr) {
    unordered_map<int, int> frequency; // To store the frequency of each element

    // Count the frequency of each element in the array
    for (int num : arr) {
        frequency[num]++;
    }

    int total_operations = 0;

    // Iterate through the unique elements in the array
    for (auto& it : frequency) {
        int num = it.first;
        int freq = it.second;

        // Calculate the minimum operations needed for the current element
        total_operations += freq * (num - *min_element(arr.begin(), arr.end()));

        // Update the frequency of the current element to 0
        it.second = 0;
    }

    return total_operations;
}

int main() {
    // Example usage:
    vector<int> arr = {4, 2, 1, 3, 4, 1, 3, 2, 4};
    int result = min_operations_to_sort(arr);

    cout << "Minimum operations required to sort the array: " << result << endl;

    return 0;
}
