#pragma once
#include <iostream>
#include "Currency.h"

class Wallet{
protected:
	int numCurrency;
	int indexList[5];
	bool currencyExists;
	const static int NUM_CURRENCIES = 5;

	// array of Currency Objects?
	Currency money[NUM_CURRENCIES];

public:
	Wallet();
	void isCurrency();
	void addMoney(int m);
	void removeMoney(int m);



	//operator
	int& operator[](int);

};