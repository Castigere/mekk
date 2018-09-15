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

void createAnimals(int number) {
    Animal *pAnimal = new Animal[number];
    char c = 'a'; // char er en int som kan inkrementeres
    for (int i = 0; i < number; i++, c++) {
        string name(1, c);
        pAnimal[i].setName(name);
        pAnimal[i].speak();
    };
    delete[] pAnimal;
};

int main() {
    createAnimals(26);
    // int *pInt = new int;
    // *pInt = 8;
    // cout << *pInt << endl;
    // delete pInt;
    // Animal *pAnimal = new Animal[10];  // Creatubg array of objects
    // pAnimal[0].setName("Even");
    // pAnimal[9].setName("Preben");
    // pAnimal[1].speak();
    // pAnimal[9].speak();
    // pAnimal->speak();
    // delete[] pAnimal;  // "[] Specifies you want to delete all objects in array allocated earlier"
    // char *pMem = new char[1000];
    // delete[] pMem;
    return 0;
}