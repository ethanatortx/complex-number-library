#include "complex.h"

// do stuff
complex operator-(complex a, complex b) {
	complex x;
	
	x.real = a.real -= b.real;
	
	x.imaginary = a.imaginary -= b.imaginary;

	return x;
}