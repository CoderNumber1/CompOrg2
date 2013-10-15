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
//File F03.h defines class f
//----------------------------------------------------------------

#ifndef F03
#define F03 1
//----------------------------------------------------------------
//C++ include files
//----------------------------------------------------------------
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
//----------------------------------------------------------------

//----------------------------------------------------------------
// Class f used for evaluating time complexity of three functions
//----------------------------------------------------------------
class f
{
public:
	f(void);
	~f();
	int ef01(int n);
	int ef02(int n);
	int ef03(int n);

	int af01(int n);
	int af02(int n);
	int af03(int n);
};
//----------------------------------------------------------------
#endif