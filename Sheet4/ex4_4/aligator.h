#ifndef Aligator_H_
#define Aligator_H_
#include <iostream>
#include "reptile.h"

class Aligator : public Reptile {
  unsigned short d_numberOfTeeth;

    public:
        Aligator(unsigned short _age,  bool _hasFeet, unsigned short _numberOfTeeth);
        Aligator();
        ~Aligator();
        unsigned short getNumberOfTeeth();
        void setNumberOfTeeth(unsigned short _numberOfTeeth);
};

#endif
