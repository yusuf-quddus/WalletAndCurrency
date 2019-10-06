#pragma once

#include <iostream>
//#include <string>

class Currency {
private:
	std::string currencyNote;
	std::string currencyCoin;
	int wholePart;
	int fractionalPart;
public:
	Currency(int, int);

	// getters
	std::string getCurrencyNote();
	std::string getCurrencyCoin();
	int getWholePart();
	int getFractionalPart();

	// setters
	void setCurrencyNote(std::string);
	void setCurrencyCoin(std::string);
	void setWholePart(int);
	void setFractionalPart(int);

	//  made class friends cause easier
	friend class Dollar;
	friend class Euro;
	friend class Yen;
	friend class Rupee;
	friend class Yuan;
};

// derived class. how to pass variables in constructor to base?
class Dollar : public Currency {
	Dollar(int, int);

};

class Euro : public Currency {
	Euro(int, int);
};

class Yen : public Currency {
	Yen(int, int);
};

class Rupee : public Currency {
	Rupee(int, int);
};

class Yuan : public Currency {
	Yuan(int, int);
};