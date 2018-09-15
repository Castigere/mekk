#include <iostream>
using namespace std;

int main() {
    cout << "Array of integers" << endl;
    cout << "=================" << endl;

    int values[5];
    values[0] = 88;
    values[1] = 1;
    values[2] = 414;
    values[3] = 13;
    values[4] = 16;
    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;
    cout << values[3] << endl;
    cout << values[4] << endl;

    cout << endl
         << "Array of doubles" << endl;
    cout << "=================" << endl;
    double numbers[4] = {4.5, 2.3, 7.2, 5.6};

    for (int i = 0; i < 4; i++) {
        cout << "Elements at index " << i << ": " << numbers[i] << endl;
    }

    cout << endl
         << "Initializing with zero values" << endl;
    cout << "=================" << endl;
    int numberArray[8] = {};
    for (int i = 0; i < 8; i++) {
        cout << "Elements at index " << i << ": " << numberArray[i] << endl;
    }

    cout << endl
         << "Initializing array of strings" << endl;
    cout << "=================" << endl;
    string texts[] = {"apple", "banana", "orange"};
    for (int i = 0; i < 3; i++) {
        cout << "Elements at index " << i << ": " << texts[i] << endl;
    }

    cout << endl
         << "Initializing array of 12*12" << endl;
    cout << "=================" << endl;

    int array[13] = {};
    for (int i = 0; i <= 12; i++) {
        array[i] = 12 * i;
    }
        for (int i = 0; i <= 12; i++) {
        cout << array[i] << endl;
    }

    return 0;
}