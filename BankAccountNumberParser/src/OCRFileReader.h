/*
 * FileReader.h
 *
 *  Created on: Apr 9, 2014
 *      Author: freiha
 */

#include <string>
#include <fstream>

#ifndef OCRFILEREADER_H_
#define OCRFILEREADER_H_
#pragma once

using namespace std;

class OCRFileReader {

public:
	OCRFileReader();
	virtual ~OCRFileReader();

	void readOneAccountDigits();
	void openFile(string filePath);

protected:
	string      accountNumberMatrix[3][9];
	ifstream    filestr;
	string      line;

private:
	void readDashesPipesFromOneLine(int subLine);

};

#endif /* OCRFILEREADER_H_ */
