#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat() {
    cout << "Cat created." << endl;
    happy = true;
}

Cat::~Cat() {
    cout << "Cat destroyed!" << endl;
}

void Cat::speak() {
    if (happy) {
        cout << "Meauwww!!!!!!!!!!!" << endl;
    } else {
        cout << "Hisss" << endl;
    }
}