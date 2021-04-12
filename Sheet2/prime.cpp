#include <iostream>
#include <cmath>
/* Only used for time measurements */
#include <chrono>
typedef std::chrono::high_resolution_clock clock_;
typedef std::chrono::duration<double, std::ratio<1> > second_;

using namespace std;

int main() {
  /* Read in the potential prime */
  cout << "Please enter a number: ";
  long num;
  cin >> num;

  /* Start the time measurement */
  chrono::time_point<clock_> start = clock_::now();

  bool isPrime = true;
    
  /*
    Implement the prime check here
  */
  for(long i = 2; i <num;i++ ){
    isPrime = isPrime && num % i !=0;
  }
    

    
  cout << "The number " << num << " is a prime?: " << isPrime << endl; 
  /* Stop time measurement and output the duration */
  cout << "Calculation took: " << chrono::duration_cast<second_>
    (clock_::now() - start).count() << "s"  << endl << endl;

  /*
    Remove the block comment below
  */
    
  cout << "Optimized version" << endl << endl;
  start = clock_::now();
    
  isPrime = true;
  if(num%2 !=0){
    for(long i = 3; i < sqrt(num); i +=2){
      if(num%i ==0){
	isPrime = false;
	break;
      }
    }
  }
  
  cout << "The number " << num << " is a prime?: " << isPrime << endl; 
  cout << "Calculation took: " << chrono::duration_cast<second_>
    (clock_::now() - start).count() << "s"  << endl << endl;
       
}
