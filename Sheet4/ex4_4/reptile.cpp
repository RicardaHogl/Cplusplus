#include "reptile.h"
using namespace std;

Reptile::Reptile()
{
    d_hasFeet = 0;
    cout << "Reptile base constructor" << endl;
}

Reptile::Reptile(unsigned short _age; bool _hasFeet)
:Animal(_age)
{
    d_hasFeet = _hasFeet;
    cout << "Reptile parameterized constructor" << endl;
}

Reptile::~Reptile(){
    cout << "Reptile destructor" << endl;
}

double Reptile::getHasFeet(){
    return hasFeet;
}

void Reptile::setHasFeet(bool _hasFeet){
    d_hasFeet = _hasFeet;
}
