#include "complex.h"

bool operator==(complex a, complex b)
{
	if(a.real == b.real && a.imaginary == b.imaginary)
	{
		return true;
	}
	return false;
}

bool operator!=(complex a, complex b)
{
	if(a == b)
	{
		return false;
	}
	return true;
}