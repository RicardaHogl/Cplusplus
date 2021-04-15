#include "animal.h"
using namespace std;

Animal::Animal()
{
    d_age = 0;
    cout << "Animal default constructor" << endl;
}

Animal::Animal(unsigned short _age)
{
    d_age = _age;
    cout << "Animal parameterized constructor" << endl;
}

Animal::~Animal(){
    cout << "Animal destructor" << endl;
}

unsigned short Animal::getAge(){
    return d_age;
}

void Animal::setAge(unsigned short _age){
    d_age = _age;
}
