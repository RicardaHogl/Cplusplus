#ifndef Aligator_H_
#define Aligator_H_
#include <iostream>
#include "mammal.h"

class Aligator : public Mammal {
  unsigned short d_numberOfTeeth;

    public:
        Aligator(unsigned short _age,  bool _hasFeet, unsigned short _numberOfTeeth);
        Aligator();
        ~Aligator();
        float getnumberOfTeeth();
        void setnumberOfTeeth(unsigned short _numberOfTeeth);
};

#endif
