//______________________________________________________________________
//File p03.cpp contains functions that process command line
//arguments
//______________________________________________________________________
//Author:       Susan Hanks
//Student ID:   *20326578
//Email:        shanks3@uco.edu
//Course:       CMSC 2123, Discrete Structures
//CRN:          21858, Fall, 2012
//Project:      p03
//Due:          October 31, 2012
//Account:      tt012
//_____________________________________________________________________
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits.h>
#include "F03.h"
//#include "List02.h"
//_____________________________________________________________________
using namespace std;
//_____________________________________________________________________
//Exceptions
//_____________________________________________________________________
    struct CommandLineException{
        CommandLineException(int max, int actual){
            cout << endl << "Too many command line arguments." << endl;
            cout << "A maximum of " << max << " arguments are permitted.";
            cout << endl;
            cout << actual << " arguments were entered. " << endl;
        }
    };
    struct FileException {
        FileException(const char* fn){
            cout << endl << "File " << fn << " could not be opened. ";
            cout << endl;
        }
    };
//_____________________________________________________________________
//Member Functions
//_____________________________________________________________________
    int  TimeMgr(istream& i1, istream& i2, istream& i3, ostream& o){
//________________________________________________________________________
//First piece of code analyzed
//________________________________________________________________________
        Title(o);
        for(;;){
            int n1 = 0;
            i1 >> n1;
            if(i1.eof()) break;
            Print(o, n1, af01(n1), ef01(n1));
        }
//________________________________________________________________________
//Second piece of code analyzed
//________________________________________________________________________
        Title(o);
        for(;;){
            int n2=0;
            i2 >> n2;
            if(i2.eof()) break;
            Print(o, n2, af02(n2), ef02(n2)); //ef02(n2);
        }
//________________________________________________________________________
//Third piece of code analyzed
//________________________________________________________________________
        Title(o);
        for(;;){
           int n3;
           i3 >> n3;
           if(i3.eof()) break;
              Print(o, n3, af03(n3), ef03(n3));
       }

    }
    
//______________________________________________________________________
//Main -- accepts four files - 3 input. 1 output
//_____________________________________________________________________
int main(int argc, char* argv[]){
    try {
        char ifn[255],ifn2[255], ifn3[255], ofn[255]; 
                        //Input and output file names
        switch (argc) {
        case 1: //Prompt for all file names.
            cout << "Enter the first input file name. ";
            cin >> ifn;
            cout << "Enter the second input file name. ";
            cin >> ifn2;
            cout << "Enter the third input file name. ";
            cin >> ifn3;
            cout << "Enter the output file name. ";
            cin >> ofn;
            break;
        case 2: //Prompt for input files 2 and 3 and output file
            strcpy(ifn,argv[1]);
            cout  << "Enter the second input file name. ";
            cin >> ifn2;
            cout << "Enter the third input file name. ";
            cin >> ifn3;
            cout << "Enter the output file name. ";
            cin >> ofn;
            break;
        case 3: //Two input file names, need one more and output file
            strcpy(ifn,argv[1]);
            strcpy(ifn2,argv[2]);
            cout << "Enter the third input file name. ";
            cin >> ifn3;
            cout << "Enter the output file name. ";
            cin >> ofn;
            break;
        case 4: //Three input file names given, need output file
            strcpy(ifn, argv[1]);
            strcpy(ifn2, argv[2]);
            strcpy(ifn3, argv[3]);
            cout << "Enter the output file name. ";
            cin >> ofn;
            break;
        case 5: //All files have been given
            strcpy(ifn, argv[1]);
            strcpy(ifn2, argv[2]);
            strcpy(ifn3, argv[3]);
            strcpy(ofn, argv[4]);
            break;
        default:
            throw CommandLineException(2,argc-1);
            break;
        }
    ifstream i(ifn); if(!i) throw FileException(ifn);
    ifstream i2(ifn2); if(!i2) throw FileException(ifn2);
    ifstream i3(ifn3); if(!i3) throw FileException(ifn3);
    ofstream o(ofn); if (!o) throw FileException(ofn);
    TimeMgr(i, i2, i3,o);
    o.close();
    i.close();
    i2.close();
    i3.close();
    } catch (FileException) {
        cout << "Program terminated." << endl;
        exit(EXIT_FAILURE);
    }
    return 0;   
}
