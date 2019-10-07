#pragma once
#include <iostream>
#include <vector>
#include "Currency.h"

class Wallet{
protected:

	int numCurrency;
	int indexList[5];
	bool currencyExists;

	const static int NUM_CURRENCIES = 5;
	Currency **money;
	
public:

	// Constructor
	Wallet();

	int numCurrencies();
	bool hasCurrency(std::string);
	void addMoney(std::string, double);
	void removeMoney(std::string, double);

	// operator overloading
	Currency operator[](int);

	// Destructor
	~Wallet();
};