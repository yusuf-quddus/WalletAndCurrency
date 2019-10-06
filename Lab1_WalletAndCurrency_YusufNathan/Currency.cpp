#include <iostream>
#include "Currency.h"

// base class
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

Dollar::Dollar(int w, int f) : Currency(w, f){
	currencyNote = "Dollar";
	currencyCoin = "cent";

//	setCurrencyNote("Dollar");
//	setCurrencyCoin("Cent");
}

Euro::Euro(int w, int f) : Currency(w, f) {
	currencyNote = "Euro";
	currencyCoin = "cent";
}

Yen::Yen(int w, int f) : Currency(w, f) {
	currencyNote = "Yen";
	currencyCoin = "sen";
}

Rupee::Rupee(int w, int f) : Currency(w, f) {
	currencyNote = "Rupee";
	currencyCoin = "paise";
}

Yuan::Yuan(int w, int f) : Currency(w, f) {
	currencyNote = "Yuan";
	currencyCoin = "fen";
}