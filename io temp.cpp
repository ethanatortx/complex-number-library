// maybe more elegant and simple solution to io problem

#include "complex.h"
#include <stringstream>

float realArr[2] = {0.0,0.0};

// operator overload for inputstream: write input to complex number input variable
complex operator>>(istream& is, complex& c) {

	string pair = "";
	while (is.good()) {
		char temp = is.get();
		pair.append(temp);
	}

	token = strtok(pair, "(, )");

	while (token != NULL) {
		if (atof(token).good()) {
			realArr[i] = token;
		}
		token = strtok(pair, "(, )");
	}

	complex ret;
	ret.real = realArr[0];
	ret.imaginary = realArr[1];

	return ret;
}