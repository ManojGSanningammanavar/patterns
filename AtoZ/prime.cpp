#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int num;
    cin >> num;

    bool factor_found_flag = false;

    auto start_time = chrono::high_resolution_clock::now();

    for (int cff = 2; cff < num / 2; cff++) {
        if (num % cff == 0) {
            factor_found_flag = true;
            break;
        }
    }

    auto stop_time = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = stop_time - start_time;

    cout << (factor_found_flag ? "Composite" : "Prime")
         << " , time taken = " << duration.count() << endl;

    return 0;
}
