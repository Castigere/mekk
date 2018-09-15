#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
   private:
    string name;
    int age;

   public:
    Person();
    string toString();
    Person(string name, int age);
};

#endif /* PERSON_H_ */