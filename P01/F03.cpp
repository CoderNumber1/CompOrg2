//----------------------------------------------------------------
//Author:		Mr. Anthony James
//Student ID:	*2031752
//E-Mail:		kjames21@uco.edu
//Course:		CMSC 2123 - Discrete Structures
//CRN:			12599, Fall, 2012
//Project:		p03
//Due:			October 31, 2012
//Account		tt014
//----------------------------------------------------------------

//----------------------------------------------------------------
//File F03.cpp implements member functions 
//	of class f.
//----------------------------------------------------------------

//----------------------------------------------------------------
//C++ include files
//----------------------------------------------------------------
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
//----------------------------------------------------------------

//----------------------------------------------------------------
//Application include files.
//----------------------------------------------------------------
#include "F03.h"
//----------------------------------------------------------------

//----------------------------------------------------------------
// Class Register acts as an 8-bit register of D-FlipFlops
//----------------------------------------------------------------

int log2(int n)
{
	return (n == 0 ? 0 : (log(n) / log(2.0)));
}

f::f(void){}
f::~f(){}

int f::ef01(int n)
{
	int c = 0;

	int sum = 1; c++;
	int a = 0; c++;
	while (a < n)
	{ c++;
		sum = sum * 2; c++; c++;

		a++; c++;
	} c++;

	while (sum > 0)
	{ c++;
		sum--; c++;
	} c++;

	return c;
}
int f::ef02(int n)
{
	int c = 0;

	int i = 0; c++;
	while (i < n)
	{ c++;
		int m = n; c++;

		while (m > 1)
		{c++;
			m = m / 2; c++; c++;
		} c++;

		i++; c++;
	} c++;

	return c;
}
int f::ef03(int n)
{
	int c = 0;

	int sum = 0; c++;
	int i = 0; c++;
	while (i < n)
	{ c++;
		int j = 0; c++;
		while (j < i)
		{ c++;
			sum++; c++;

			j++; c++;
		} c++;

		i++; c++;
	} c++;

	return c;
}

int f::af01(int n)
{
	return 4 + 4 * n + pow(2, n + 1);
}
int f::af02(int n)
{
	return 2 + (4 * n) + n * (int)(log2(n)) + 2 * n * (int)(log2(n));
}
int f::af03(int n)
{
	int summation = 0;
    for(int a = 0; a < n; a++){
        summation += a;
    }

	return 3 + 4 * n + 3 * summation;
}
//----------------------------------------------------------------