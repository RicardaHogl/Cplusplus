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
	   double epsilon = 0.0001;
	   It takes 9487 iterations to approximate Pi to: 3.14149
	   The difference is: 9.99994e-05 < 0.0001

	   double epsilon = 0.00001;
		 The program did not stop. It runs in an endless loop, because the integer computation
		 k*k leads to an overflow for large numbers and that leads to sum = inf.
		 Therefore pi - piApprox never reached.
	 */
}
