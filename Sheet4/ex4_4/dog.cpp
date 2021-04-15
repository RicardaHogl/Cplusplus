#include "dog.h"
using namespace std;

Dog::Dog()
{
    d_kilosFoodPerDay = 0;
    cout << "Dog base constructor" << endl;
}

Dog::Dog(unsigned short _age, double _hairLength double _kilosFoodPerDay)
:Mammal(_age, _hairLength)
{
    d_kilosFoodPerDay = _kilosFoodPerDay;
    cout << "Dog parameterized constructor" << endl;
}

Dog::~Dog(){
    cout << "Dog destructor" << endl;
}

double Dog::getKilosFoodPerDay(){
    return d_kilosFoodPerDay;
}

void Dog::setKilosFoodPerDay(double _kilosFoodPerDay){
    d_kilosFoodPerDay = _kilosFoodPerDay;
}
