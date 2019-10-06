#include <iostream>
#include <string>
#include "Currency.h"
#include "Wallet.h"	

Wallet::Wallet() {
	//money[0] = new Dollar;
	/*money[1] = new Euro;
	money[2] = new Yen;
	money[3] = new Rupee;
	money[4] = new Yuan;*/

	delete money;
}

int& Wallet::operator[](int index)
{
	return indexList[index];
}

Currency& Currency::operator= (const Currency &c1)
{
	wholePart = this->wholePart;
	fractionalPart = this->fractionalPart;
	currencyCoin = this->currencyCoin;
	currencyNote = this->currencyNote;

	return c1;
}