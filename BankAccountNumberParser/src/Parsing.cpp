/*
 * Parsing.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: freiha
 */

#include "Parsing.h"
#include <iostream>

Parsing::Parsing() {

}

Parsing::~Parsing() {

}

int Parsing::checkSumCalc(string accountNumber){

	int d[9];
	for (int i=0;i<9;i++)
	{
		d[9-i]=(int)accountNumber[i];
	}

	return (d[0]+2*d[1]+3*d[2]+4*d[3]+5*d[4]+6*d[5]+7*d[6]+8*d[7]+9*d[8]) % 11;
}

void Parsing::accountDecoder(string accountNumberMatrix[][9]) {

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
					if (totalDigit==zero)  { accountNumber.insert(k,"0"); }
					if (totalDigit==one)   { accountNumber.insert(k,"1"); }
					if (totalDigit==two)   { accountNumber.insert(k,"2"); }
					if (totalDigit==three) { accountNumber.insert(k,"3"); }
					if (totalDigit==four)  { accountNumber.insert(k,"4"); }
					if (totalDigit==five)  { accountNumber.insert(k,"5"); }
					if (totalDigit==six)   { accountNumber.insert(k,"6"); }
					if (totalDigit==seven) { accountNumber.insert(k,"7"); }
					if (totalDigit==eight) { accountNumber.insert(k,"8"); }
					if (totalDigit==nine)  { accountNumber.insert(k,"9"); }
				}

}
