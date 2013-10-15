//------------------------------------------------------------------------
//File Stack03.cpp implements member functions of class Stack
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
#include "Stack03.h"
//------------------------------------------------------------------------
//A StackException is thrown when the Stack is empty.
//------------------------------------------------------------------------
struct StackException {
   StackException(char* m)
   {   cout << endl;
       cout << "I am the Stack and I am " << m << ".";
       cout << endl;
   }
};
    void Stack::Kill(Element* e)
    {   while (e) {
            Element* p=e;
            e=e->prev;
            delete p;
        }
    }
    Stack::Stack():tos(0){}
    Stack::~Stack(){Kill(tos);}
    bool Stack::IsFull(void){return false;}
    bool Stack::IsEmpty(void){return tos==0;}
    void Stack::Push(int v)
    {   if (IsFull()) throw StackException("full");
        Element* e=new Element(tos,v);
        tos=e;
    }
    int Stack::Pop(void)
    {   if (IsEmpty()) throw StackException("empty");
        Element* e=tos;
        int v=tos->value;
        tos=tos->prev;
        delete e;
        return v;
    }
    void Stack::Print(ostream& o)
    {   Element* e=tos;
        int a=0;
        while (e) {
            o << endl;
            o << "Stack[tos";
            if (a<0) o << a;
            o << "]=";
            o << e->value;
            e=e->prev;
        }
        o << endl;
    }
