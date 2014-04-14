/*
 * Parsing.h
 *
 *  Created on: Apr 9, 2014
 *      Author: freiha
 */

#ifndef PARSING_H_
#define PARSING_H_
#pragma once
#include<string>
using namespace std;

class Parsing {
public:
	Parsing();
	virtual ~Parsing();

	void accountDecoder(string accountNumberMatrix[][9]);
	int  checkSumCalc(string accountNumber);
public:
	string      accountNumber;
};

#endif
