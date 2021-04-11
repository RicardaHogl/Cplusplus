// ConsoleApplication1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

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
	//cout << (someNumber / 2);
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
