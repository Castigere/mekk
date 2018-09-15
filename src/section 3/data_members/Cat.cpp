#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {
    if(happy) {
    cout << "Meauwww!!!!!!!!!!!" << endl;
    } else {
        cout << "Hisss" << endl;
    }
}

void Cat::jump() {
    cout << "Jumping to top of bookcase" << endl;
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}