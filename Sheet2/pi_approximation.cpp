#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double pi =  3.141592;

	/*
	a)
	*/
	{
		/* Calculate here */
		double piApprox = 0; /* Save the result in this variable */
		int n = 50000;
		double sum =0;
		for(int k = 1; k<n; k++){
		  sum += 1.0/(k * k);
		}
		piApprox = sqrt(6 * sum);
		cout << "Pi is approximately: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << endl;
	}

	/*
	b)
	*/
	{
		double piApprox = 0; /* Save the result in this variable */
		double epsilon = 0.0001;
		int i = 0; /* Write the amount of iterations needed in this variable */
		/* Calculate here */
	  int k = 1;
		double sum = 0;
		while( abs(pi - piApprox)> epsilon ){
		  sum += 1.0/ (k * k);
		  piApprox = sqrt(6 * sum);
		  k++;
		}
		i = k-1;
		cout << "It takes " << i << " iterations to approximate Pi to: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << " < " << epsilon << endl;
	}

	/*
	   c)

		 Now reduce epsto 0.00001 and run the program again.
		 What result do you get now?

		 Answer:
	   epsilon = 0.0001;
	   It takes 9487 iterations to approximate Pi to: 3.14149
	   The difference is: 9.99994e-05 < 0.0001

	   epsilon = 0.00001;
		 The program did not stop, it runs in an endless loop, because:
		 k is an 32bit Integer, so k*k is also an 32bit integer computation.
		 We know that the leading bit is for the sign, so the absolute value has 31bit.
		 For k=65536, it is k*k = 4294967296 = 2^(32), so there is an overflow,
		 which leads to k*k = 2^(32) becomes 0. Thus we get sum = 1.0/0, which C++
		 interprets as infinity. Therefore since k=65536 it is piApprox = inf
		 in all following loop runs, and the stopping rule pi - piApprox <= eps
		 will never be reached.


		 What conclusions do you draw from this with regard to the handling of
		 foating point arithmetic?

		 Answer:
		 We find out, that in C++ the term 1/0 is seen as infinity instead of rising an error,
		 so we have to be careful and better check if this can happen, when we create
		 a computation with variable divisions.

	 */
}
