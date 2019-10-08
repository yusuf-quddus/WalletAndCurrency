#pragma once

#include <iostream>
#include "Currency.h"

class Wallet{
protected:

	int numCurrency;
	int indexList[5];
	bool currencyExists;

	const static int NUM_CURRENCIES = 5;
	Currency *money[NUM_CURRENCIES];
	
public:

	// Constructor
	Wallet();

	// member functions
	int numCurrencies();
	bool hasCurrency(std::string);
	void addMoney(std::string, double);
	void removeMoney(std::string, double);

	// operator overloading
	Currency& operator[](int);
    




	// Destructor
	virtual ~Wallet();
};
