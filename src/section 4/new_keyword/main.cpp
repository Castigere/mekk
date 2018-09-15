#include <iostream>
using namespace std;

class Animal {
   private:
    string name;

   public:
    Animal() {
        cout << "Animal created." << endl;
    }

    // Copy constructor, can call !const methods
    Animal(const Animal &other) : name(other.name) {
        cout << "Animal created by copying." << endl;
    }

    ~Animal() {
        cout << "Destructor called." << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() const {
        cout << "My name is: " << name << endl;
    }
};

Animal *createAnimal() {
    Animal *a = new Animal;
    a->setName("Freda");
    return a;
}

int main() {
    Animal *pCat1 = new Animal();
    pCat1->setName("Freddy");
    pCat1->speak();
    delete pCat1; // Always call delete if new is used

    cout << sizeof(pCat1) << endl; // Pointer is a long

    return 0;
}