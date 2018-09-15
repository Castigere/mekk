#include <iostream>
using namespace std;

int main() {
    // for (int i = 0; i < 5; i++) {
    //     cout << "I is: " << i << endl;
    //     if (i == 3) {
    //         break;
    //     }
    // }

    // for (int i = 0; i < 5; i++) {
    //     cout << "I is: " << i << endl;
    //     if (i == 3) {
    //         continue;
    //     }
    //     cout << "Logging..." << endl;
    // }

    const string password = "hello";
    string input;

    do {
        cout << "Enter your password: " << flush;
        cin >> input;
        if (input == password) {
            break;
        } else {
            cout << "Access denied." << endl;
        }
    } while (true);
    cout << "Correct password!" << endl;
    return 0;
}