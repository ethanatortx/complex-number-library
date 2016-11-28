#include <iostream>
#include <string>
#include <fstream>
#include "complex.h"
using namespace std;

int main() {
	cout << "Begin complex number file testing\n";
	cout << "...Instantiating complex number a with 1+2i\n";
	complex a(1,2);
	cout << "...Constructor success!\n";
	complex b;
	cout << "Input a complex number b: ";
	cin >> b;
	cout << "...Instantiating complex number b with " << b << endl;
	cout << "...Constructor success!\n";

	cout << "\n\nCOMPLEX ARITHMETIC\n";
	cout << "a+b = " << a+b << endl;
	cout << "a-b = " << a-b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << a/b << endl;

	cout << "\n\nCOMPLEX FUNCTIONS\n";
	cout << "Absolute value abs(): " << abs(a) << endl;
	cout << "Angle arg(): " << arg(a) << endl;
	cout << "Conjugate conj(): " << conj(a) << endl;
	cout << "Imaginary part imag(): " << imag(a) << endl;
	cout << "Magnitude norm(): " << norm(a) << endl;
	cout << "Polar form polar(): " << polar(norm(a),arg(a)) << endl;
	cout << "Real part real(): " << real(a) << endl;
}