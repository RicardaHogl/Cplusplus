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
		for(double k = 1; k<n; k++){
		  sum += 1/(k * k);
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
		double epsilon = 0.00001; 
		int i = 0; /* Write the amount of iterations needed in this variable */
		/* Calculate here */
	        double k = 1;
		double sum = 0;
		while( abs(pi - piApprox)> epsilon ){
		  sum += 1/ (k * k);
		  piApprox = sqrt(6 * sum);
		  k++;
		}
		i = k-1;
		cout << "It takes " << i << " iterations to approximate Pi to: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << " < " << epsilon << endl;
	}

	/* 
	   c) 
	   double epsilon = 0.00001; 
	   It takes 9487 iterations to approximate Pi to: 3.14149
	   The difference is: 9.99994e-05 < 0.0001

	   double epsilon = 0.00001; 
	   It takes 89635 iterations to approximate Pi to: 3.14158
	   The difference is: 9.9999e-06 < 1e-05

	   To everyones surprise it takes longer to approximate it more precisely :)

	 */
}
