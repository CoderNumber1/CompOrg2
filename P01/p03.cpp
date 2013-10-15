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
//Application include files.
//----------------------------------------------------------------
#include "F03.h"
//----------------------------------------------------------------

//----------------------------------------------------------------
//PrintAnalysis
//----------------------------------------------------------------
void PrintAnalysis(ostream& output, int n, int analytical, int empirical)
{
	output << right << setw(5) << n << right << setw(20) << analytical << right << setw(20) << empirical;
	output << endl;
}

//----------------------------------------------------------------
//PrintTitle prints the title for each section
//----------------------------------------------------------------
void PrintTitle(ostream& output)
{
	output << endl;
	output << setw(5) << "n" << setw(20) << "Analytical" << setw(20) << "Empirical";
	output << endl;
}

//----------------------------------------------------------------
//TimeComplexityMgr examines the time complexity 
//	of several pieces of code.
//----------------------------------------------------------------
void TimeComplexityMgr(istream& input01, istream& input02, istream& input03, ostream& output)
{
	f analysis = f();

	PrintTitle(output);
	for(;;)
	{
		int n01 = 0;

		input01 >> n01;

		if(input01.eof())
			break;

		PrintAnalysis(output, n01, analysis.af01(n01), analysis.ef01(n01));
	}

	PrintTitle(output);
	for(;;)
	{
		int n02 = 0;

		input02 >> n02;

		if(input02.eof())
			break;

		PrintAnalysis(output, n02, analysis.af02(n02), analysis.ef02(n02));
	}

	PrintTitle(output);
	for(;;)
	{
		int n03 = 0;

		input03 >> n03;

		if(input03.eof())
			break;

		PrintAnalysis(output, n03, analysis.af03(n03), analysis.ef03(n03));
	}
}

//----------------------------------------------------------------
//CommandLineException thrown
//	when there are too many command line arguments
//----------------------------------------------------------------
struct CommandLineException
{
	CommandLineException(int maxArgCount, int argCount)
	{
		cout << endl;
		cout << argCount << " arguments were supplied.";
		cout << endl;
		cout << "Only " << maxArgCount << " arguments are allowed.";
		cout << endl;
	}
};
//----------------------------------------------------------------

//----------------------------------------------------------------
//FileException thrown when a file cannot be opened.
//----------------------------------------------------------------
struct FileException
{
	FileException(char* fileName)
	{
		cout << endl;
		cout << "The file " << fileName << " could not be found/opened.";
		cout << endl;
	}
};
//----------------------------------------------------------------

//----------------------------------------------------------------
//Function main is the starting point for the application.
//----------------------------------------------------------------
int main(int argc, char* argv[])
{
	try
	{
		char inputName01[255]
			, inputName02[255]
			, inputName03[255]
			, outputName[255];

		switch(argc)
		{
			case 1:
				cout << "Enter the first input file name: ";
				cin >> inputName01;

				cout << "Enter the second input file name: ";
				cin >> inputName02;

				cout << "Enter the third input file name: ";
				cin >> inputName03;

				cout << "Enter output file name: ";
				cin >> outputName;
				break;
			case 2:
				strcpy(inputName01, argv[1]);

				cout << "Enter the second input file name: ";
				cin >> inputName02;

				cout << "Enter the third input file name: ";
				cin >> inputName03;

				cout << "Enter output file name: ";
				cin >> outputName;
				break;
			case 3:
				strcpy(inputName01, argv[1]);
				strcpy(inputName02, argv[2]);

				cout << "Enter the third input file name: ";
				cin >> inputName03;

				cout << "Enter output file name: ";
				cin >> outputName;
				break;
			case 4:
				strcpy(inputName01, argv[1]);
				strcpy(inputName02, argv[2]);
				strcpy(inputName03, argv[3]);

				cout << "Enter output file name: ";
				cin >> outputName;
				break;
			case 5:
				strcpy(inputName01, argv[1]);
				strcpy(inputName02, argv[2]);
				strcpy(inputName03, argv[3]);
				strcpy(outputName, argv[4]);
				break;
			default:
				throw CommandLineException(3, argc - 1);
		}

		ifstream input01(inputName01);
		if(!input01)
			throw FileException(inputName01);

		ifstream input02(inputName02);
		if(!input02)
			throw FileException(inputName02);

		ifstream input03(inputName03);
		if(!input03)
			throw FileException(inputName03);

		ofstream output(outputName);
		if(!output)
			throw FileException(outputName);

		TimeComplexityMgr(input01, input02, input03, output);

		input01.close();
		input02.close();
		input03.close();
		output.close();
	}
	catch(...)
	{
		cout << endl;
		cout << "Program ended unexpectedly.";
		cout << endl;

		exit(EXIT_FAILURE);
	}

	return 0;
}
//----------------------------------------------------------------