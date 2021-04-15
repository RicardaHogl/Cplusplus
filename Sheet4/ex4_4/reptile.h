#ifndef REPTILE_H_
#define REPTILE_H_
#include <iostream>
#include "animal.h"

class Reptile : public Animal{
    bool d_hasFeet;

    public:
        Reptile(unsigned short _age, bool _hasFeet);
        Reptile();
        ~Reptile();
        bool getHasFeet();
        // void setHasFeet(bool _hasFeet);
};

#endif
