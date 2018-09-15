#include <iostream>
using namespace std;

int main() {
    cout << "Enter your name: " << flush;
    string input;
    cin >> input;
    cout << "You entered: " << input << endl; 

    int value;
    cout << "Enter a number:" << flush;
    cin >> value;
    cout << "You entered: " << value << endl;
    return 0;
}