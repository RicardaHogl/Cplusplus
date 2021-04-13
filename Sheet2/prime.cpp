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
  if (num <= 1) {
    isPrime = false;
  }
  else {
    for(long i = 2; i <num;i++ ){
      isPrime = isPrime && num % i !=0;
    }
  }


  cout << "The number " << num << " is a prime?: " << isPrime << endl;
  /* Stop time measurement and output the duration */
  cout << "Calculation took: " << chrono::duration_cast<second_>
    (clock_::now() - start).count() << "s"  << endl << endl;

  /* Optimizes version:
   a) How can I stop checking more numbers if a divisor has already been found?
      Answ.: Quit the loop with a break statement.

      When is a number definitely not a prime number?
      Answ: When it is even.

   b) Does the number have to be divided with all previous numbers or can some
      be omitted?
      Answ.: We have just to check previous numbers 2,...,sqrt(num), because of
      the following:
      Assume that x is a divisor of num with x>sqrt(num). It follows that there
      has to exist a y with y<sqrt(num) and num = x*y. So we can find out that
      num is not prime by checking y.
      Futhermore if we check separately, whether num is even, then we just have
      to test the odd values within [3,sqrt(num)].
  */

  cout << "Optimized version" << endl << endl;
  start = clock_::now();

  isPrime = true;
  if (num <= 1) {
    isPrime = false;
  }
  else if(num != 2 && num%2 == 0){
    isPrime = false;
  }
  else{
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

/* c) Test your optimized version against the previous one with a large prime
      number, such as 100000004987.

      Answer: We checked it with the shorter number 1073807359 and get:

      Please enter a number: 1073807359
      The number 1073807359 is a prime?: 1
      Calculation took: 7.86824s

      Optimized version

      The number 1073807359 is a prime?: 1
      Calculation took: 0.000192985s

      -> We can see that our optimized version is much faster.

*/
