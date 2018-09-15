#include <sstream>
#include "Person.h"

Person::Person() {
    name = "";
    age = 0;
}

string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << " Age: ";
    ss << age;

    return ss.str();
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;

    cout << "Memory locaion of object: " << this << endl; 
}