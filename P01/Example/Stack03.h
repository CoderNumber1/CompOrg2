#ifndef Stack03_h
#define Stack03_h 1
//------------------------------------------------------------------------
//File Stack03.h defines class Stack, a stack of dynamically allocated
//elements, each containing an integer
//------------------------------------------------------------------------
//Author: Dr. Sweet T.
//E-Mail: trturner@uco.edu
//Date:   June, 2010
//------------------------------------------------------------------------
//Copyright June, 2010 by Thomas R. Turner.
//Do not reproduce without permission from Thomas R. Turner.
//------------------------------------------------------------------------
//C++ include files
//------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
//------------------------------------------------------------------------
//Application include files
//------------------------------------------------------------------------
//------------------------------------------------------------------------
//class Stack defines a stack of dynamically allocated elements where
//each element contains an integer.
//------------------------------------------------------------------------
class Stack {
    struct Element {
        Element* prev;
        int value;
        Element(Element* p,int v):prev(p),value(v){}
    };
    Element* tos;
    void Kill(Element* e);
public:
    Stack();
    ~Stack();
    bool IsFull(void);
    bool IsEmpty(void);
    void Push(int v);
    int Pop(void);
    void Print(ostream& o);
};
#endif
