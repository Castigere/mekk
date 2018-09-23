#include <iostream>
using namespace std;

class Animal {
   public:
    virtual void speak()   // vtable enables the right method from the right subclass by the name of the subclass (Cat in this case)
       
     = 0; // any descendants of this superclas has to implement a .speak method "pure virtual method"
    virtual ~Animal(){};  // make destructors virtual to make sure that the right instance of the object is freed up
};

class Cat : public Animal {
   public:
    virtual void speak() {  // makes it clear it is a method that overrides behaviod from the base class.
        cout << "RrrrrRRRrrrrr" << endl;
    }
    virtual ~Cat(){};
};

class HouseCat : public Cat {
   public:
    virtual void speak() {
        cout << "Meeeouw" << endl;
    }
    virtual ~HouseCat(){};
};

int main() {
    Animal *pAnimal = new HouseCat;

    pAnimal->speak();

    HouseCat mimi;
    mimi.speak();

    delete pAnimal;
    return 1;
}
