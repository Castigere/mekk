#include <iostream>
using namespace std;

int main() {
    int values[] = {4, 7, 3, 4, 7};

    cout << sizeof(values) << endl;
    cout << sizeof(int) << endl;

    for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
        cout << values[i] << " " << flush;
    }

    cout << endl;

    int array2d[4][6] = {};

    for (long long unsigned int i = 0; i < sizeof(array2d[i]) / sizeof(int); i++) {
        cout << i << "," << endl;
    }

    return 0;
}