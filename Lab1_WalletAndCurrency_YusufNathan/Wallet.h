#pragma once
#include <iostream>

class Wallet{
private:
	int numCurrency;
	bool currencyExists;
	// array of Currency Objects?
public:
	void isCurrency();
	void addMoney(int m);
	void removeMoney(int m);

};