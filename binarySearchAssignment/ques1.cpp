/*Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1.
Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
Output 1: 6*/

#include <iostream>
#include <vector>

using namespace std;

int last_occurrence(const vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            result = mid;
            left = mid + 1;  // Continue searching to the right
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 5};
    int x = 4;
    int last_index = last_occurrence(arr, x);
    cout << "Output: " << last_index << endl;  // Output: 6

    return 0;
}
