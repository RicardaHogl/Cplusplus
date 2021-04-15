#ifndef REPTILE_H_
#define REPTILE_H_
#include <iostream>

class Reptile {
    bool d_hasFeet;

    public:
        Reptile(unsigned short age, bool _hasFeet);
        Reptile();
        ~Reptile();
        bool getHasFeet();
        void setHasFeet(bool _hasFeet);
};

#endif
