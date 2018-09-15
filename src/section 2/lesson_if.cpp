#include <iostream>
using namespace std;

int main() {
    string password = "hello";
    cout << "Enter your password: " << flush;
    string input;
    cin >> input;
    if (input == password) {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong!" << endl;
    }
    return 0;
}