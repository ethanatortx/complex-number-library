#include "complex.h"

// assignment overload for subtraction in complex number library
complex operator-(complex a, complex b) {
	
	// declare return variable to hold difference of complex A and complex B
	complex x;
	
	// subtract real number component of complex B from real number component of complex A
	x.real = a.real -= b.real;
	
	// subtract imaginary number compnent of complex B from imaginary number component of complex A
	x.imaginary = a.imaginary -= b.imaginary;

	// return the difference of complex A and complex B
	return x;
}

// assignement overload for addition equals to
complex operator+=(complex a, complex b) {

	// declare return variable for difference of two things
	complex x;

	// subtract real number component
	x.real = a.real - b.real;

	// subtract imaginary number component
	x.imaginary = a.imagninary - b.imaginary;

	// return imaginary number
	return x;
}