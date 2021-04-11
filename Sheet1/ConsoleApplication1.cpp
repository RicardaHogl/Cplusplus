// Ex 1.3 (Solving quadratic equations)
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Welcome to the midnight equation solver"<<endl;
	double a;
	double b;
	double c;
	cout << " Enter a number a:";
	cin >> a;
	cout << endl;
	cout << " Enter a number b:";
	cin >> b;
	cout << endl;
	cout << " Enter a number c:";
	cin >> c;
	cout << endl;
	cout << "Trying to find solutions for " << a << "x^2+" << b << "x+" << c << "=0" << endl;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "All values for x are possible, since 0=0 is always true" << endl; 
			}
			else {
				cout << "No solution" << endl;
			}
		}
		else {
			if (c == 0) {
				cout << "The solution is 0" << endl;
			}
			else {
				cout << "The solution is " << -c / b << endl;
			}
		}
	}
	else {
		double sol1;
		double sol2;
		if ((b * 4 - 4 * a * c) < 0) {
			cout << "No real solutions" << endl;
		}
		else {
			sol1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			sol2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			if (sol1 != sol2) {
				cout << "The first solution is " << sol1 << ", the second solution is " << sol2 << endl;
			}
			else {
				cout << "The only solution is " << sol1 << endl;
			}
		}
	}
}
