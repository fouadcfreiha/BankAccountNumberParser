/*
 * OCRFileReader.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: freiha
 */

#include "OCRFileReader.h"
#include "Parsing.h"
#include <iostream>
#include <fstream>
using namespace std;

OCRFileReader::OCRFileReader() {

}

OCRFileReader::~OCRFileReader() {

	filestr.close();
}

void OCRFileReader::readDashesPipesFromOneLine(int subLine){
	string lineSubDigit="   ";
	for (int i=0;i<27;i=i+3)
		{
			lineSubDigit[0]=line[i];
			lineSubDigit[1]=line[i+1];
			lineSubDigit[2]=line[i+2];
			accountNumberMatrix[subLine][(int)i/3]=lineSubDigit;
			cout<<lineSubDigit;
		}
	cout<<endl;
}
void OCRFileReader::openFile(string filePath) {
	 filestr.open(filePath.c_str());
}
void OCRFileReader::readOneAccountDigits() {

	if (filestr.is_open()) {
		while(!filestr.eof()){
			//Space
			getline (filestr, line);
			//First Line
			getline (filestr, line);
			OCRFileReader::readDashesPipesFromOneLine(0);
			//Second line
			getline (filestr, line);
			OCRFileReader::readDashesPipesFromOneLine(1);
			//Third line
			getline (filestr, line);
			OCRFileReader::readDashesPipesFromOneLine(2);

			//Translation into numbers
			Parsing parser;
			parser.accountDecoder(accountNumberMatrix);
			cout<<parser.accountNumber<<endl;
		}
	}
	else {
		cout<<"Could not open file";
	}
}





