/*
 * TestingTest.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: freiha
 */

#include "Parsing.h"

#include <CppUTest/TestHarness.h>

TEST_GROUP(Parsing) {

	Parsing p;
	void assertValideLineDecoding() {

		string accountNumberMatrix[3][9];

		accountNumberMatrix[0][0]="   ";
		accountNumberMatrix[0][1]=" _ ";
		accountNumberMatrix[0][2]=" _ ";
		accountNumberMatrix[0][3]="   ";
		accountNumberMatrix[0][4]=" _ ";
		accountNumberMatrix[0][5]=" _ ";
		accountNumberMatrix[0][6]=" _ ";
		accountNumberMatrix[0][7]=" _ ";
		accountNumberMatrix[0][8]=" _ ";

		accountNumberMatrix[0][0]="  |";
		accountNumberMatrix[0][1]=" _|";
		accountNumberMatrix[0][2]=" _|";
		accountNumberMatrix[0][3]="|_|";
		accountNumberMatrix[0][4]="|_ ";
		accountNumberMatrix[0][5]="|_ ";
		accountNumberMatrix[0][6]="  |";
		accountNumberMatrix[0][7]="|_|";
		accountNumberMatrix[0][8]="|_|";

		accountNumberMatrix[0][0]="  |";
		accountNumberMatrix[0][1]="|_ ";
		accountNumberMatrix[0][2]=" _|";
		accountNumberMatrix[0][3]="  |";
		accountNumberMatrix[0][4]=" _|";
		accountNumberMatrix[0][5]="|_|";
		accountNumberMatrix[0][6]="  |";
		accountNumberMatrix[0][7]="|_|";
		accountNumberMatrix[0][8]=" _|";

		Parsing parser;
		parser.accountDecoder(accountNumberMatrix);
		CHECK(parser.accountNumber.compare("123456789"));
	}
};

TEST(Parsing, InitialValueAfterCreationIsValid) {

	assertValideLineDecoding();
}
