#pragma once

#include <iostream>
#include <string>

class Currency {
protected:
	std::string currencyNote;
	std::string currencyCoin;
	int wholePart;
	int fractionalPart;
public:
	Currency();
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
	/*friend class Dollar;
	friend class Euro;
	friend class Yen;
	friend class Rupee;
	friend class Yuan;
	*/

	// operator overloads
	Currency& operator= (const Currency * &c1);
	friend std::istream& operator>>(std::istream &in, Currency &c);
	friend std::ostream& operator<<(std::ostream& out, const Currency& c);
	friend Currency operator+ (Currency&, Currency&);
	friend Currency operator- (Currency&, Currency&);
	friend bool operator== (Currency&, Currency&);
	friend bool operator> (Currency&, Currency&);
	friend bool operator< (Currency&, Currency&);
	friend bool operator>= (Currency&, Currency&);
	friend bool operator<= (Currency&, Currency&);
};

// derived class. how to pass variables in constructor to base?
class Dollar : public Currency {
public:	
	Dollar();
	Dollar(int, int);
};

class Euro : public Currency {
public:
	Euro();
	Euro(int, int);
};

class Yen : public Currency {
public:
	Yen();
	Yen(int, int);
};

class Rupee : public Currency {
public:
	Rupee();
	Rupee(int, int);
};

class Yuan : public Currency {
public:
	Yuan();
	Yuan(int, int);
};