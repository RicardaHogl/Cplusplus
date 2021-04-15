#include "cat.h"
using namespace std;

Cat::Cat()
{
    d_eyeColor = "";
    cout << "Cat base constructor" << endl;
}

Cat::Cat(unsigned short _age, double _hairLength, std::string _eyeColor)
:Mammal(_age, _hairLength)
{
    d_eyeColor = _eyeColor;
    cout << "Cat parameterized constructor" << endl;
}

Cat::~Cat(){
    cout << "Cat destructor" << endl;
}

std::string Cat::getEyeColor(){
    return d_eyeColor;
}

void Cat::setEyeColor(std::string _eyeColor){
    d_eyeColor = _eyeColor;
}
