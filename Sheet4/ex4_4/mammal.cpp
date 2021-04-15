#include "mammal.h"
using namespace std;

Mammal::Mammal()
{
    d_hairLength = 0;
    cout << "Mammal base constructor" << endl;  //typeid(*this).name()
}

Mammal::Mammal(unsigned short _age, double _hairLength):
: Animal(d_age)
{
    d_hairLength = _hairLength;
    cout << "Mammal parameterized constructor" << endl;
}

Mammal::~Mammal(){
    cout << "Mammal destructor" << endl;
}

double Mammal::getHairLength(){
    return hairLength;
}

void Mammal::setHairLength(double _h){
    hairLength = _h;
}
