#include <iostream>
using namespace std;

class Frog {
   private:
    string name;  // encapsulated function only available to the class
   private:
    string getName() {
        return name;
    }

   public:
    Frog(string name) : name(name) {
        cout << "Creating frog with name: " << name << endl;
    }

    void info() {
        cout << "My name is: " << getName() << endl;
    }
};

int main() {
    Frog frog("Freddy");
    frog.info();
    return 0;
}