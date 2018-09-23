#include <iostream>
using namespace std;

int main() {
    int value = 8;

    value++;

    cout << value << endl;

    ++value;

    cout << value << endl;

    value--;

    cout << value << endl;

    --value;

    cout << ++value << endl;  // indrements and uses new value
    cout << value++ << endl;  // uses value and increments value
    cout << value << endl;

    return 0;
}