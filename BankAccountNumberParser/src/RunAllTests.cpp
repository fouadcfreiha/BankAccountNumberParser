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
	reader.openFile("/Users/freiha/Documents/workspacec++/BankAccountNumberParser/src/test.input.txt");
	reader.readOneAccountDigits();

	//Unit tests of methods used
	return CommandLineTestRunner::RunAllTests(argc,argv);
}


/*
int main(int argc, char **argv) {

	cout <<"Reading the lines from the file"<<endl;
	//TODO Divide into input directory and input file name
	ifstream filestr ("/Users/freiha/Documents/workspacec++/BankAccountNumberParser/src/test.input.txt");
	string line;
	string accountNumberMatrix[3][9];
	string accountNumber[9];
	string topDigit="   ";
	string midDigit="   ";
	string bottomDigit="   ";

	if (filestr.is_open()) {
	while(!filestr.eof()){
	//Reading and storing

		//Space
		getline (filestr, line);
		//First Line
		getline (filestr, line);
		for (int i=0;i<27;i=i+3)
		{
			topDigit[0]=line[i];
			topDigit[1]=line[i+1];
			topDigit[2]=line[i+2];
			accountNumberMatrix[0][(int)i/3]=topDigit;
		}
		//Second line
		getline (filestr, line);
		for (int i=0;i<27;i=i+3)
		{
			midDigit[0]=line[i];
			midDigit[1]=line[i+1];
			midDigit[2]=line[i+2];
			accountNumberMatrix[1][(int)i/3]=midDigit;
		}
		cout<<endl;
		//Third line
		getline (filestr, line);
		for (int i=0;i<27;i=i+3)
		{
			bottomDigit[0]=line[i];
			bottomDigit[1]=line[i+1];
			bottomDigit[2]=line[i+2];
			accountNumberMatrix[2][(int)i/3]=bottomDigit;
		}

		//Mid-tier TDD to see if file read is the same as storage
		for (int k=0;k<9;k++)
		{
			cout<<accountNumberMatrix[0][k];
		}
		cout<<endl;
		for (int k=0;k<9;k++)
		{
			cout<<accountNumberMatrix[1][k];
		}
		cout<<endl;
		for (int k=0;k<9;k++)
		{
			cout<<accountNumberMatrix[2][k];
		}
		cout<<endl;
		//Translating account number from dashes to real numbers
		string zero=string(" _ ")+
					string("| |")+
					string("|_|");

		string one= string("   ")+
					string("  |")+
					string("  |");

		string two= string(" _ ")+
				    string(" _|")+
					string("|_ ");

		string three=string(" _ ")+
					 string(" _|")+
					 string(" _|");

		string four=string("   ")+
					string("|_|")+
					string("  |");

		string five=string(" _ ")+
					string("|_ ")+
					string(" _|");

		string six=string(" _ ")+
				   string("|_ ")+
				   string("|_|");

		string seven=string(" _ ")+
					 string("  |")+
					 string("  |");

		string eight=string(" _ ")+
					 string("|_|")+
					 string("|_|");

		string nine=string(" _ ")+
					string("|_|")+
					string(" _|");

		for (int k=0;k<9;k++)
				{
					string totalDigit=accountNumberMatrix[0][k]+accountNumberMatrix[1][k]+accountNumberMatrix[2][k];
					if (totalDigit==zero)  { accountNumber[k]="0";}
					if (totalDigit==one)   { accountNumber[k]="1";}
					if (totalDigit==two)   { accountNumber[k]="2";}
					if (totalDigit==three) { accountNumber[k]="3";}
					if (totalDigit==four)  { accountNumber[k]="4";}
					if (totalDigit==five)  { accountNumber[k]="5";}
					if (totalDigit==six)   { accountNumber[k]="6";}
					if (totalDigit==seven) { accountNumber[k]="7";}
					if (totalDigit==eight) { accountNumber[k]="8";}
					if (totalDigit==nine)  { accountNumber[k]="9";}

				}
		cout<<accountNumber[0]<<accountNumber[1]<<accountNumber[2]<<accountNumber[3]<<accountNumber[4]<<accountNumber[5]<<accountNumber[6]<<accountNumber[7]<<accountNumber[8]<<endl;

	//File is open
	}
    filestr.close();
	}
	else {
		cout<<"Unable to open file - specify the location of your input file"<<endl;
	}

	return CommandLineTestRunner::RunAllTests(argc,argv);
}
*/
