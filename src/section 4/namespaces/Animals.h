#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;

namespace ejh {

const string CATNAME = "Tiddles";

class Cat {
   private:
   public:
    Cat();
    ~Cat();
    void speak();
};

} /* namespace ejh */

#endif /* ANIMALS_H_ */