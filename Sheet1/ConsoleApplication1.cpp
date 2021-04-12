// Ex 1.3 (Solving quadratic equations)
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  cout << "Welcome to the midnight formula solver"<<endl;
  double a,b,c;
  cout << " Enter a number a:\n";
  cin >> a;
  cout << " Enter a number b:\n";
  cin >> b;
  cout << " Enter a number c:\n";
  cin >> c;
  cout << "Trying to find solutions for the equation" << a << "x^2+" << b << "x+" << c << "=0" << endl;
  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
	cout << "All values for x are possible, since 0=0 is always true\n";
      }
      else {
	cout << "No solution\n";
      }
    }
    else {
      if (c == 0) {
	cout << "The solution is 0\n";
      }
      else {
	cout << "The solution is " << -c / b << "\n";
      }
    }
  }
  else {
    if ((b * b - 4 * a * c) < 0) {
      cout << "No real-valued solutions\n";
    }
    else {
      double sol1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
      double sol2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
      if (sol1 != sol2) {
	cout << "The first solution is " << sol1 << ", the second solution is " << sol2 << "\n";
      }
      else {
	cout << "The only solution is " << sol1 << "\n";
      }
    }
  }
}
