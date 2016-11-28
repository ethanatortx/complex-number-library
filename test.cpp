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
	a += b;
	cout << a << endl;
	
	complex x;
	cin >> x;
	cout << x;
	
	complex ab(5, 9);
	complex bc(5,10);
	bool result = (ab != bc);
	cout << result;
}