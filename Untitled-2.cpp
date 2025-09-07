#include <iostream>
using namespace std;

int main() {
    int n = 6;
    bool isPrime = true;

    for (int i = 2; i < n; i++) {  // Fixed: Loop until i < n (or use i <= n/2)
        if (n % i == 0) {
            isPrime = false;
            break;  // Fixed: Added semicolon
        }
    }

    if (isPrime == true) {  // Fixed: Corrected variable name (isPrime, not isprime)
        cout << n << " is a prime number";
    } else {
        cout << n << " is not a prime number";
    }

    return 0;
}