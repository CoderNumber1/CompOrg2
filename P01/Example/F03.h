#ifndef F03_h
#define F03_h
//________________________________________________________________________
//File F03.h defines class f that contains prototypes for analytical 
//functions af01, af02, and af03, and empirical functions ef01, ef02, 
//and ef03.
//________________________________________________________________________
//Author:       Susan Hanks
//Student ID:   *20326578
//Email:        shanks3@uco.edu
//Course:       CMSC 2123, Discrete Structures
//CRN:          21858, Fall, 2012
//Project:      p03
//Due:          October 31, 2012
//Account:      tt027
//________________________________________________________________________
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//________________________________________________________________________
using namespace std;
    int log4(int n);
    int summation(int n);
    int sum4(int n);
    int sum2(int n);
    void Title(ostream& o);
    int af01(int n);
    int af02(int n);
    int af03(int n);
    int ef01(int n);
    int ef02(int n);
    int ef03(int n);
    void Print(ostream& o, int n, int a, int e);
#endif
