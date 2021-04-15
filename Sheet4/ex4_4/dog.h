#ifndef DOG_H_
#define DOG_H_
#include <iostream>
#include "mammal.h"

class Dog : public Mammal {
  float d_kilosFoodPerDay;

    public:
        Dog(unsigned short _age, double hairLength, float _kilosFoodPerDay);
        Dog();
        ~Dog();
        float getKilosFoodPerDay();
        void setKilosFoodPerDay(float _kilosFoodPerDay);
};

#endif
