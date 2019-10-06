#include <iostream>
#include <string>
#include "Currency.h"

// base class
Currency::Currency() {}
Currency::Currency(int w, int f) {
	wholePart = w;
	fractionalPart = f;
	if (fractionalPart > 100) {
		wholePart += (fractionalPart / 100);
		fractionalPart = fractionalPart % 100;
	}
}

std::string Currency::getCurrencyNote() {
	return currencyNote;
}

std::string Currency::getCurrencyCoin() {
	return currencyCoin;   
}

int Currency::getWholePart() {
	return wholePart;
}

int Currency::getFractionalPart() {
	return fractionalPart;
}

void Currency::setCurrencyNote(std::string n) {
	currencyNote = n;
}

void Currency::setCurrencyCoin(std::string c) {
	currencyCoin = c;
}

void Currency::setWholePart(int w) {
	wholePart = w;
}

void Currency::setFractionalPart(int f) {
	if (fractionalPart > 100) {
		wholePart += (fractionalPart / 100);
		fractionalPart = fractionalPart % 100;
	}
	fractionalPart = f;
}

// derived 
Dollar::Dollar() {
	currencyNote = "Dollar";
	currencyCoin = "cent";
}

Dollar::Dollar(int w, int f) : Currency(w, f){
	currencyNote = "Dollar";
	currencyCoin = "cent";

//	setCurrencyNote("Dollar");
//	setCurrencyCoin("Cent");
}

Euro::Euro() {
	currencyNote = "Euro";
	currencyCoin = "cent";
}

Euro::Euro(int w, int f) : Currency(w, f) {
	currencyNote = "Euro";
	currencyCoin = "cent";
}

Yen::Yen() {
	currencyNote = "Yen";
	currencyCoin = "sen";
}

Yen::Yen(int w, int f) : Currency(w, f) {
	currencyNote = "Yen";
	currencyCoin = "sen";
}

Rupee::Rupee() {
	currencyNote = "Rupee";
	currencyCoin = "paise";
}

Rupee::Rupee(int w, int f) : Currency(w, f) {
	currencyNote = "Rupee";
	currencyCoin = "paise";
}

Yuan::Yuan() {
	currencyNote = "Yuan";
	currencyCoin = "fen";
}

Yuan::Yuan(int w, int f) : Currency(w, f) {
	currencyNote = "Yuan";
	currencyCoin = "fen";
}

std::ostream & operator<<(std::ostream&out, const Currency &c)
{
	out << c.wholePart << " " << c.currencyCoin << " " << c.fractionalPart 
		<< " " << c.currencyCoin << std::endl;
	return out;
}

std::istream & operator>>(std::istream &in, Currency &c)
{
	std::cout << "Enter Real Part ";
	in >> c.wholePart;
	std::cout << "Enter Imagenory Part ";
	in >> c.fractionalPart;
	return in;
}

Currency operator+(Currency& c1, Currency& c2)
{
	Currency c3;
	c3.wholePart = c1.wholePart + c2.wholePart;
	c3.fractionalPart = c1.fractionalPart + c2.fractionalPart;

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

	if (c3.fractionalPart > 100) {
		c3.wholePart += (c3.fractionalPart / 100);
		c3.fractionalPart = c3.fractionalPart % 100;
	}

	// if fraction is negative, make positive
	if (c3.fractionalPart < 0) {
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
	if (c1.wholePart >= c2.wholePart)
		return true;

	else if (c1.wholePart == c2.wholePart && c1.fractionalPart >= c2.fractionalPart)
		return true;

	else
		return false;
}

bool operator <= (Currency& c1, Currency& c2)
{
	if (c1.wholePart <= c2.wholePart)
		return true;

	else if (c1.wholePart == c2.wholePart && c1.fractionalPart <= c2.fractionalPart)
		return true;

	else
		return false;
}