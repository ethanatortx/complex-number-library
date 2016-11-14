#include <iostream>
#include <string>
#include <fstream>
#include "complex.h"
using namespace std;

int main() {
	cout << "Begin complex number file testing\n";
	complex a = {1,2};
	cout << abs(a);
}