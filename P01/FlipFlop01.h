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
//File FlipFlip01.h defines class FlipFlop, which acts as
//	a D-FlipFlop
//----------------------------------------------------------------

#ifndef Flipflop01
#define Flipflop01 1
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
// Class FlipFlop acts as a D-FlipFlop
//----------------------------------------------------------------
class FlipFlop
{
private:
	bool value;

public:
	FlipFlop(void);
	FlipFlop(bool value);
	~FlipFlop();
	void setValue(bool value);
	bool getValue(void);
	bool getNotValue(void);
};
//----------------------------------------------------------------
#endif