//Creator Information:
/*
 *Name: Hunter Derrick
 *Professor Name: Tony Hinton
 *Class: CSC215 @ UAT
 *Assignment: Learn how to create Header Files and combine multiple sources.
 *Assignment Start Date: 11/11/2018
 *Assignment Complete Date: 11/11/2018
 */
//Task:
/*
Make your program uses at least 3 functions.
Create a header file for a new CPP source file that you will make.
Put all functions in a separate CPP source file.
Come up with a creative program
Your program should do something to demonstrate header and source files. 
Your main function should control all the other functions.
Comment your source code files (.CPP) well. 
 */

 //Lets include Preprocessor Directives
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include "Declarations.h"


//Lets add a namespace
using namespace std;


//Function Named 'main' this will operate as the main function that runs everything.
int main()
{
	//TODO: Make This
	GetTextFromUser();
	WelcomeUser();
	NarrativeForUser();

	//Add in System Pause and Return Statements.
	system("pause");
	return(0);

}

