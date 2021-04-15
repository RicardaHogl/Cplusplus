#include "dog.h"
using namespace std;

Dog::Dog()
{
    d_kilosFoodPerDay = 0;
    cout << "Dog base constructor" << endl;
}

Dog::Dog(unsigned short _age, double _hairLength, float _kilosFoodPerDay)
:Mammal(_age, _hairLength)
{
    d_kilosFoodPerDay = _kilosFoodPerDay;
    cout << "Dog parameterized constructor" << endl;
}

Dog::~Dog(){
    cout << "Dog destructor" << endl;
}

float Dog::getKilosFoodPerDay(){
    return d_kilosFoodPerDay;
}

void Dog::setKilosFoodPerDay(float _kilosFoodPerDay){
    d_kilosFoodPerDay = _kilosFoodPerDay;
}
