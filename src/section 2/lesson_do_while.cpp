#include <iostream>
using namespace std;

int main() {
    const string password = "hello";
    string input;

    while (input != password) {
        cout << "Enter your password: " << flush;
        cin >> input;
        if(input != password) {
            cout << "Incorrect! Try again! FOREVER!" << endl;
        }
    }
    cout << "Correct password!";
    return 0;
}