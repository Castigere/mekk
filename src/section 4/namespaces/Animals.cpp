#include "Animals.h"


namespace ejh {

Cat::Cat() {
    cout << "Cat created!" << endl;
}

Cat::~Cat() {
    cout << "Cat destructed!" << endl;
}

void Cat::speak() {
    cout << "Ssssss!" << endl;
}

} /* namespace ejh */