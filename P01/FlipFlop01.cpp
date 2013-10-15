//----------------------------------------------------------------
//Author:		Mr. Anthony James
//Student ID:	*2031752
//E-Mail:		kjames21@uco.edu
//Course:		CMSC 2123 - Discrete Structures
//CRN:			11847, Fall, 2012
//Project:		p01
//Due:			October 29, 2012
//Account		tt029
//----------------------------------------------------------------

//----------------------------------------------------------------
//File FlipFlop01.cpp implements member functions 
//	of class FlipFlop.
//----------------------------------------------------------------


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

//------------------------------------------------------------------------
//Application include files
//------------------------------------------------------------------------
#include "FlipFlop01.h"
//------------------------------------------------------------------------

//----------------------------------------------------------------
// Class FlipFlop acts as a D-FlipFlop
//----------------------------------------------------------------
FlipFlop::FlipFlop(void){}
FlipFlop::FlipFlop(bool value)
{
	this->setValue(value);
}
FlipFlop::~FlipFlop(){}

void FlipFlop::setValue(bool value)
{
	this->value = value;
}

bool FlipFlop::getValue(void)
{
	return this->value;
}

bool FlipFlop::getNotValue(void)
{
	return !this->value;
}
//----------------------------------------------------------------