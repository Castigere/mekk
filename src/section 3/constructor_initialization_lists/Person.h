#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
   private:
    string name;
    int age;

   public:
    Person() : name("undefined"), age(0){};
    string toString();
    Person(string name, int age) : name(name), age(age){};
};

#endif /* PERSON_H_ */