#include <iostream>
using namespace std;

class Machine {
   private:
    int id;  // private in machine class, cannot be initialized from sub class

   public:
    Machine() : id(0) {
        cout << "Machine no-argument constructor called." << endl;
    }
    Machine(int id) {
        cout << "Machine no-argument constructor called with ID: " << id << endl;
    }
    void info() {
        cout << "ID :" << id << endl;
    }
    void setId(int id) {
        this->id = id;
    }
};

class Vehicle : public Machine {
   public:
    Vehicle() {
        cout << "Vehicle no-argument constructor called." << endl;
    }
    Vehicle(int id): Machine(id) { // Running super class constructor when called
        cout << "Vehicle no-argument constructor called with ID: " << id << endl;
    }
};

class Car : public Vehicle {
   public:
    Car(): Vehicle(999) {
        cout << "Car no-argument constructor called." << endl;
    }
};

int main() {
    Car nissan;
    nissan.setId(23);
    nissan.info();

    Machine volvo(575);

    Vehicle even(23904823);

    Car toyota;
    return 0;
}