#include "complex.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

ostream& operator<<(ostream& lhs, const complex& rhs) //inserter
{
	lhs << "(" << rhs.real << ", " << rhs.imaginary << ")";
	return lhs;
	
	/*
	char mid;
	if(rhs.imaginary >= 0) {
		mid = '+';
	} else {
		mid = '-';
	}
	lhs << "" << rhs.real << " " << mid << " " << rhs.imaginary << "i";
	return lhs;
	*/
}

istream& operator>>(istream& lhs, complex& rhs) //extractor
{
	double r;
	double i;
	char input[20];
	lhs.getline(input, 256);
		
	int locParenthesis1 = -1;
	int locComma = 0;
	int locParenthesis2 = -1;
	
	for(int i = 0; i < 20; i++)
	{
		if (input[i] == '(')
			locParenthesis1 = i;
		if (input[i] == ',')
			locComma = i;
		if (input[i] == ')')
			locParenthesis2 = i;
	}
	
	char real[10];
	char imaginary[10];
	int counter = 0;
	
	if(locComma == 0)
	{
		i = 0.0;
		
		if(locParenthesis2 == -1)
		{
			r = (double) atof(input);
		}
		
		else
		{
			for(int z = locParenthesis1 + 1; z < locParenthesis2; z++)
			{
				real[counter] = input[z];
				counter++;
			}
			
			r = (double) atof(real);
		}
	}
	
	else
	{	
		counter = 0;
		
		for(int j = locParenthesis1 + 1; j < locComma; j++)
		{
			real[counter] = input[j];
			counter++;
		}
		
		counter = 0;
		
		if(input[locComma + 1] == ' ')
		{
			for (int k = locComma + 2; k < locParenthesis2; k++)
			{
				imaginary[counter] = input[k];
				counter++;
			}
		}
		else
		{
			for (int l = locComma + 1; l < locParenthesis2; l++)
			{
				imaginary[counter] = input[l];
				counter++;
			}
		}
		
		r = (double) atof(real);
		i = (double) atof(imaginary);
	}
	
	rhs.real = r;
	rhs.imaginary = i;
		
	return lhs;
}