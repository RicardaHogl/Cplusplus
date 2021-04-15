// Ex  4.1 b
/*
The function recursive computes the digit sum (in german: Quersumme).
*/

#include<stdio.h>
#include<math.h>

unsigned long iterative(unsigned long n) {
  unsigned long sum = 0;
  for (int i=0; i<=log10(n); i++){
    unsigned long firstDigits = (n/pow(10,i));
  	sum+=firstDigits%10;
  }
  return sum;
}

int main(void)
{
	unsigned long x = iterative(100);
	printf("Iteration terminated successfully, result is: x = %lu\n", x);
	return 0;
}
