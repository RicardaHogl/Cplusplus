#ifndef MAMMAL_H_
#define MAMMAL_H_
#include <iostream>
#include "animal.h"


class Mammal : public Animal {
    double d_hairLength;

    public:
        Mammal(unsigned short d_age, double d_hairLength);
        Mammal();
        ~Mammal();
        double getHairLength();
        void setHairLength(double d_hairLength);
};

#endif
