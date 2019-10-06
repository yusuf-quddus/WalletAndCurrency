#include <iostream>
#include <string>
#include "Currency.h"
#include "Wallet.h"	

Wallet::Wallet() {
	money[0] = new Dollar;
	money[1] = new Euro;
	money[2] = new Yen;
	money[3] = new Rupee;
	money[4] = new Yuan;
}

int& Wallet::operator[](int index)
{
	return indexList[index];
}