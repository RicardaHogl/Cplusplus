#include "aligator.h"
using namespace std;

Aligator::Aligator()
{
    unsigned short numberOfTeeth = 0;
    cout << "Aligator base constructor" << endl;
}

Aligator::Aligator(unsigned short _age, bool _hasFeet, unsigned short _numberOfTeeth)
:Reptile(_age, _hasFeet)
{
    d_numberOfTeeth = _numberOfTeeth;
    cout << "Aligator parameterized constructor" << endl;
}

Aligator::~Aligator(){
    cout << "Aligator destructor" << endl;
}

dunsigned short Aligator::getnumberOfTeeth(){
    return d_numberOfTeeth;
}

void Aligator::setnumberOfTeeth(unsigned short _numberOfTeeth){
    d_numberOfTeeth = _numberOfTeeth;
}
