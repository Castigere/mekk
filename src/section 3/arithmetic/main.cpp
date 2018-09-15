#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

// +
// -
// *
// /
// +=
// -=
// /=
// *=
// %
// %=
// precedence

int main() {
    double value1 = (double)7 / 2;  // casting to float
    cout << value1 << endl;

    int value2 = (int)8.3;
    cout << value2 << endl;

    int value3 = 8;
    value3 += 1;  // value3 = value3 + 1 or value3++
    cout << value3 << endl;

    int value4 = 10;
    value4 /= 5;  // value = value4/5
    cout << value4 << endl;

    int value5 = 12 % 5;  // keeps the remainder (mod)
    cout << value5 << endl;

    double equation = 5.3 / 4 + 2 * 6;  // operator precedence
    cout << equation << endl;

    for (int i = 0; i < 100000; i++) {
        if (i % 100 == 0) {
            cout << "." << flush;
            this_thread::sleep_for(chrono::milliseconds(50));
        }
    }

    return 0;
}