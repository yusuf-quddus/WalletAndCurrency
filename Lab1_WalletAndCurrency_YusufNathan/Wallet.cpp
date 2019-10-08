#include <iostream>
#include <string>
#include "Currency.h"
#include "Wallet.h"	

// constructor
Wallet::Wallet() 
{
	money[0] = new Dollar;
	money[1] = new Euro;
	money[2] = new Yen;
	money[3] = new Rupee;
	money[4] = new Yuan; 
}

// member functions
bool Wallet::hasCurrency(std::string name) {
	for (int i = 0; i < NUM_CURRENCIES; i++) {
		if (name == money[i]->getCurrencyNote()) {
			if (money[i]->getWholePart() == 0 && money[i]->getFractionalPart() == 0) {
				return 0;
			}
		}
	}
	return 1;
}

int Wallet::numCurrencies() {
	int counter = 0;
	for (int i = 0; i < NUM_CURRENCIES; i++) {
		if (money[i]->getWholePart() == 0 && money[i]->getFractionalPart() == 0) {
			counter++;
		}
	}
	return counter;
}

void Wallet::addMoney(std::string name, double m) {
	int j = 0;
	while (name != money[j]->getCurrencyNote()) {
		j++;
	}
	*money[j] = *money[j] + m;
}

void Wallet::removeMoney(std::string name, double m) {
	if (hasCurrency) {
		int j = 0;
		while (name != money[j]->getCurrencyNote()) {
			j++;
		}

		*money[j] = *money[j] - m;
	}
	std::cout << "Wallet does not have this currency!" << std::endl;
}

// operator overloading
Currency Wallet::operator[](int index)
{
	if (index >= 5)
	{
		std::cout << "Array index out of bound, exiting" << std::endl;
		exit(0);
	}
	return *money[index];
}

// destructor
Wallet::~Wallet() {
	for (int i = 0; i < NUM_CURRENCIES; i++) {
		delete money[i];
	}
}



