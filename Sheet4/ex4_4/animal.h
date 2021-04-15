#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream>

class Animal {
    unsigned short d_age;

    public:
        Animal(unsigned short _age);
        Animal();
        ~Animal();
        unsigned short getAge();
        void setAge(unsigned short _age);
};

#endif
