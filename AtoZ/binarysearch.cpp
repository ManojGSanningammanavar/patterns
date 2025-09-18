#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {23, 56, 78, 90, 191, 199, 245};
    int low = 0;
    int high = arr.size() - 1;
    int target = 90;
    int result = -1;  // store result index

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;   // found target
            break;          // stop searching
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // move right
        }
        else {
            high = mid - 1; // move left
        }
    }

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
