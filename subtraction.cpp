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

// assignement overload for subtraction: equals to
void operator-=(complex &a, const complex &b) {

	// modify complex input A: 

	// subtract real of complex B from real of complex A
	a.real -= b.real;

	// subtract imaginary of complex B from imaginary of complex A
	a.imaginary -= b.imaginary;

}