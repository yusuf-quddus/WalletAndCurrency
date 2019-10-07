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

	int numCurrencies();
	bool hasCurrency(std::string);
	void addMoney(std::string, double);
	void removeMoney(std::string, double);
	Currency operator[](int);

	~Wallet();
	//operator
	
};