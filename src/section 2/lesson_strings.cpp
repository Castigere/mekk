#include <iostream>
using namespace std;

int main() {
    string text = "Hello, ";
    string name = "Even";
    int number = 10;

    string text3 = text + name;
    cout << text << endl;
    cout << name << endl;
    cout << text << name << endl;
    cout << text3 << endl;
    return 0;
}