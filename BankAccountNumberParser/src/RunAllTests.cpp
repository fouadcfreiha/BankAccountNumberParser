//============================================================================
// Name        : RunAllTests.cpp
// Author      : Fouad Freiha
// Version     : 1
// Description : Kata Coding
//============================================================================

#include <iostream>
#include <fstream>
#include "OCRFileReader.h"
#include "Parsing.h"

#include <CppUTest/CommandLineTestRunner.h>
using namespace std;

int main(int argc, char **argv) {

	//High level visual TDD at the console
	OCRFileReader reader;
	reader.openFile("/Users/freiha/git/BankAccountNumberParser/BankAccountNumberParser/src/test.input.txt");
	reader.readOneAccountDigits();

	//Unit tests of methods used
	return CommandLineTestRunner::RunAllTests(argc,argv);
}

