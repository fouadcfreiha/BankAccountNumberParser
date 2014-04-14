/*
 * TestingTest.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: freiha
 */

#include "Parsing.h"
#include <iostream>
#include <CppUTest/TestHarness.h>

TEST_GROUP(Parsing) {

	Parsing p;
	void assertValideLineDecoding() {

		string accountNumberMatrix[3][9];

		accountNumberMatrix[0][0]="   ";
		accountNumberMatrix[1][0]="  |";
		accountNumberMatrix[2][0]="  |";

		accountNumberMatrix[0][1]=" _ ";
		accountNumberMatrix[1][1]=" _|";
		accountNumberMatrix[2][1]="|_ ";

		accountNumberMatrix[0][2]=" _ ";
		accountNumberMatrix[1][2]=" _|";
		accountNumberMatrix[2][2]=" _|";

		accountNumberMatrix[0][3]="   ";
		accountNumberMatrix[1][3]="|_|";
		accountNumberMatrix[2][3]="  |";

		accountNumberMatrix[0][4]=" _ ";
		accountNumberMatrix[1][4]="|_ ";
		accountNumberMatrix[2][4]=" _|";

		accountNumberMatrix[0][5]=" _ ";
		accountNumberMatrix[1][5]="|_ ";
		accountNumberMatrix[2][5]="|_|";

		accountNumberMatrix[0][6]=" _ ";
		accountNumberMatrix[1][6]="  |";
		accountNumberMatrix[2][6]="  |";

		accountNumberMatrix[0][7]=" _ ";
		accountNumberMatrix[1][7]="|_|";
		accountNumberMatrix[2][7]="|_|";

		accountNumberMatrix[0][8]=" _ ";
		accountNumberMatrix[1][8]="|_|";
		accountNumberMatrix[2][8]=" _|";

		Parsing parser;
		parser.accountDecoder(accountNumberMatrix);

		CHECK(parser.accountNumber=="123456789");
	}

	void assertCheckSumCalculationRight(){
		Parsing parser;
		CHECK(parser.checkSumCalc("123456789")==0);

	}
	void assertCheckSumCalculationWrong(){
			Parsing parser;
			CHECK(parser.checkSumCalc("12789")!=0);

		}

};

TEST(Parsing, InitialValueAfterCreationIsValid) {

	assertValideLineDecoding();
	assertCheckSumCalculationRight();
	assertCheckSumCalculationWrong();
}
