#include "Cat.h"

namespace cats {

Cat::Cat() {
    cout << "Cat created!" << endl;
}

Cat::~Cat() {
    cout << "Cat destructed!" << endl;
}

void Cat::speak() {
    cout << "Meauwww!!!!!!!!!!!!!!!!!!" << endl;
}

}  // namespace cats
