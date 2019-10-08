#include <iostream>
#include <string>
#include "Currency.h"

// base class:
// constructors
Currency::Currency() {}
Currency::Currency(int w, int f) 
{
	wholePart = w;
	fractionalPart = f;

	// adds excess fractional part to whole part
	if (f > 100) {
		wholePart += (fractionalPart / 100);
		fractionalPart = fractionalPart % 100;
	}
}

// member function
std::string Currency::getCurrencyNote() 
{
	return currencyNote;
}

std::string Currency::getCurrencyCoin() 
{
	return currencyCoin;   
}

int Currency::getWholePart() 
{
	return wholePart;
}

int Currency::getFractionalPart() 
{
	return fractionalPart;
}

void Currency::setCurrencyNote(std::string n) 
{
	currencyNote = n;
}

void Currency::setCurrencyCoin(std::string c) 
{
	currencyCoin = c;
}

void Currency::setWholePart(int w) 
{
	wholePart = w;
}

void Currency::setFractionalPart(int f) 
{
	// adds excess fractional part to whole part
	if (f > 100) {
		wholePart += (fractionalPart / 100);
		fractionalPart = fractionalPart % 100;
	}
	fractionalPart = f;
}

// Derived Classes: 
// Dollar class
Dollar::Dollar()
{
	currencyNote = "Dollar";
	currencyCoin = "cent";
}

Dollar::Dollar(int w, int f) : Currency(w, f) 
{
	currencyNote = "Dollar";
	currencyCoin = "cent";
}

// Euro Class
Euro::Euro() 
{
	currencyNote = "Euro";
	currencyCoin = "cent";
}

Euro::Euro(int w, int f) : Currency(w, f) 
{
	currencyNote = "Euro";
	currencyCoin = "cent";
}

// Yen Class
Yen::Yen() 
{
	currencyNote = "Yen";
	currencyCoin = "sen";
}

Yen::Yen(int w, int f) : Currency(w, f) 
{
	currencyNote = "Yen";
	currencyCoin = "sen";
}

// Rupee Class
Rupee::Rupee() 
{
	currencyNote = "Rupee";
	currencyCoin = "paise";
}

Rupee::Rupee(int w, int f) : Currency(w, f) 
{
	currencyNote = "Rupee";
	currencyCoin = "paise";
}

// Yuan Class
Yuan::Yuan() 
{
	currencyNote = "Yuan";
	currencyCoin = "fen";
}

Yuan::Yuan(int w, int f) : Currency(w, f) 
{
	currencyNote = "Yuan";
	currencyCoin = "fen";
}

// operator overloading
std::ostream & operator<<(std::ostream&out, const Currency &c)
{
	out << c.wholePart << " " << c.currencyNote << " " << c.fractionalPart 
		<< " " << c.currencyCoin << std::endl;
	return out;
}

std::istream & operator>>(std::istream &in, Currency &c)
{
	std::cout << "Enter Note Amount ";
	in >> c.wholePart;
	std::cout << "Enter Coin Amount ";
	in >> c.fractionalPart;
	return in;
}

Currency operator+(Currency& c1, Currency& c2)
{
	Currency c3;
	c3.wholePart = c1.wholePart + c2.wholePart;
	c3.fractionalPart = c1.fractionalPart + c2.fractionalPart;

	// adds excess fractional part to whole part
	if (c3.fractionalPart > 100) {
		c3.wholePart += (c3.fractionalPart / 100);
		c3.fractionalPart = c3.fractionalPart % 100;
	}

	return c3;
}

Currency operator+ (Currency& c1, double d)
{
	// seperate whole and fractional part
	Currency c3;
	c3.wholePart = 0;
	c3.fractionalPart = 0;
	int i;
	double i2;
	i = d / 1;
	i2 = d - i;
	c3.wholePart = c1.wholePart + i;
	c3.fractionalPart = c1.fractionalPart + (i2 * 100) + 1;

	// adds excess fractional part to whole part
	if (c3.fractionalPart > 100) {
		c3.wholePart += (c3.fractionalPart / 100);
		c3.fractionalPart = c3.fractionalPart % 100;
	}

	return c3;
}

Currency operator+(double d, Currency& c1)
{
	// seperate whole and fractional part
	Currency c3;
	c3.wholePart = 0;
	c3.fractionalPart = 0;
	int i;
	double i2;
	i = d / 1;
	i2 = d - i;
	c3.wholePart = c1.wholePart + i;
	c3.fractionalPart = c1.fractionalPart + (i2 * 100) + 1;

	// adds excess fractional part to whole part
	if (c3.fractionalPart > 100) {
		c3.wholePart += (c3.fractionalPart / 100);
		c3.fractionalPart = c3.fractionalPart % 100;
	}

	return c3;
}

Currency operator-(Currency& c1, Currency& c2)
{
	Currency c3;
	c3.wholePart = c1.wholePart - c2.wholePart;
	c3.fractionalPart = c1.fractionalPart - c2.fractionalPart;

	// adds excess fractional part to whole part
	if (c3.fractionalPart > 100) {
		c3.wholePart += (c3.fractionalPart / 100);
		c3.fractionalPart = c3.fractionalPart % 100;
	}

	// if fraction is negative, make positive
	if (c3.fractionalPart < 0 && c3.wholePart >= 1) {
		c3.wholePart -= 1;
		c3.fractionalPart += 100;
	}

	// if whole is negative, turn everything to 0.00
	if (c3.wholePart < 0) {
		c3.wholePart = 0;
		c3.fractionalPart = 0;
	}
	return c3;
}

Currency operator-(double d, Currency& c1)
{
	// seperate whole and fractional part
	Currency c3;
	c3.wholePart = 0;
	c3.fractionalPart = 0;
	int i;
	double i2;
	i = d / 1;
	i2 = d - i;
	c3.wholePart = i - c1.wholePart;
	c3.fractionalPart = (i2 * 100) - c1.fractionalPart;

	// adds excess fractional part to whole part
	if (c3.fractionalPart > 100) {
		c3.wholePart += (c3.fractionalPart / 100);
		c3.fractionalPart = c3.fractionalPart % 100;
	}

	// if fraction is negative, make positive
	if (c3.fractionalPart < 0 && c3.wholePart >= 1) {
		c3.wholePart -= 1;
		c3.fractionalPart += 100;
	}

	// if whole is negative, turn everything to 0.00
	if (c3.wholePart < 0) {
		c3.wholePart = 0;
		c3.fractionalPart = 0;
	}

	return c3;
}

Currency operator-(Currency& c1, double d)
{
	// seperate whole and fractional part
	Currency c3;
	c3.wholePart = 0;
	c3.fractionalPart = 0;
	int i;
	double i2;
	i = d / 1;
	i2 = d - i;
	c3.wholePart = c1.wholePart - i;
	c3.fractionalPart = c1.fractionalPart - (i2 * 100);

	// adds excess fractional part to whole part
	if (c3.fractionalPart > 100) {
		c3.wholePart += (c3.fractionalPart / 100);
		c3.fractionalPart = c3.fractionalPart % 100;
	}

	// if fraction is negative, make positive
	if (c3.fractionalPart < 0 && c3.wholePart >= 1) {
		c3.wholePart -= 1;
		c3.fractionalPart += 100;
	}

	// if whole is negative, turn everything to 0.00
	if (c3.wholePart < 0) {
		c3.wholePart = 0;
		c3.fractionalPart = 0;
	}

	return c3;
}

bool operator==(Currency& c1, Currency& c2)
{
	bool equal;
	equal = (c1.wholePart == c2.wholePart && c1.fractionalPart == c2.fractionalPart);
	return equal;
}

bool operator > (Currency& c1, Currency& c2)
{
	if (c1.wholePart > c2.wholePart)
		return true;

	else if (c1.wholePart == c2.wholePart && c1.fractionalPart > c2.fractionalPart)
		return true;

	else
		return false;
}

bool operator < (Currency& c1, Currency& c2)
{
	if (c1.wholePart < c2.wholePart)
		return true;

	else if (c1.wholePart == c2.wholePart && c1.fractionalPart < c2.fractionalPart)
		return true;

	else
		return false;
}

bool operator >= (Currency& c1, Currency& c2)
{
	if (c1.wholePart > c2.wholePart)
		return true;

	else if (c1.wholePart == c2.wholePart && c1.fractionalPart >= c2.fractionalPart)
		return true;

	else
		return false;
}

bool operator <= (Currency& c1, Currency& c2)
{
	if (c1.wholePart < c2.wholePart)
		return true;

	else if (c1.wholePart == c2.wholePart && c1.fractionalPart <= c2.fractionalPart)
		return true;

	else
		return false;
}

void Currency::operator = (const Currency* c1)
{
	wholePart = c1->wholePart;
	fractionalPart = c1->fractionalPart;
	currencyCoin = c1->currencyCoin;
	currencyNote = c1->currencyNote;
}
