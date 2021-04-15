#ifndef CAT_H_
#define CAT_H_
#include <iostream>
#include "mammal.h"
#include <string>

class Cat : public Mammal {
  std::string d_eyeColor;

    public:
        Cat(unsigned short _age, double _hairLength, std::string _eyeColor);
        Cat();
        ~Cat();
        std::string getEyecolor();
        void setEyecolor(std::string _eyeColor);
};

#endif
