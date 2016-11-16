#include <iostream>
#include <string>
#include <fstream>
#include "complex.h"
using namespace std;

int main() {
	cout << "Begin complex number file testing\n";
	cout << "...Instantiating complex number with 1+2i\n";
	complex a(1,2);
	cout << "...Constructor success!\n";
	cout << "\n\nTRIG FUNCTIONS\n";
	cout << "Absolute value abs(): " << abs(a) << endl;
	cout << "Angle arg(): " << arg(a) << endl;
	complex b(3,4);
	cout << abs(a + b);
}