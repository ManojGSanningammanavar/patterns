#include <bits/stdc++.h>
using namespace std;

// Function to increment the large integer by one
vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    // Start from the last digit and move backward
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;      // Just add one and no carry
            return digits;
        }
        digits[i] = 0;        // If it's 9, make it 0 and carry over
    }

    // If all digits were 9 (e.g., 999 → 1000)
    digits.insert(digits.begin(), 1);
    return digits;
}

// Main function
int main() {
    vector<int> digits = {9, 9, 9};  // You can change this input

    vector<int> result = plusOne(digits);

    cout << "Result: ";
    for (int d : result) {
        cout << d;
    }
    cout << endl;

    return 0;
}
