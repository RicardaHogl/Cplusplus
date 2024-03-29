#include "animal.h"
#include "mammal.h"
#include "reptile.h"
#include "cat.h"
#include "dog.h"
#include "aligator.h"
using namespace std;

int main () {

  Cat cat1 = Cat(7, 2.12, "grey/green");
  Cat cat2 = Cat(3, 1.72, "yellow with brown sprinkles");
  Dog dog = Dog(12, 1.0, 2.0);
  Aligator aligator1 = Aligator(1, true, 30);
  Aligator aligator2 = Aligator(2, true,  31);
  Aligator aligator3 = Aligator(3, true, 32);

  Animal *animals = new Animal[6];
  animals[0] = cat1;
  animals[1] = cat2;
  animals[2] = dog;
  animals[3] = aligator1;
  animals[4] = aligator2;
  animals[5] = aligator3;

  for (int i = 0; i<6; i++){
    cout << "Tier " << i+1 << " ist " << animals[i].getAge() << " Jahre alt." << endl;
  }

  delete[] animals;

}
