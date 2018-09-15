#include <iostream>
#include "Animals.cpp"
#include "Animals.h"
#include "Cat.cpp"
#include "Cat.h"
using namespace std;
using namespace ejh;

int main() {
    cats::Cat bob;
    bob.speak();
    Cat bo2;
    bo2.speak();
    cout << cats::CATNAME << endl;
    cout << ejh::CATNAME << endl;
    cout << CATNAME << endl;

    return 0;
}