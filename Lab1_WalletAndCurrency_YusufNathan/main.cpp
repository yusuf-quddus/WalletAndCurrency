#include <iostream>
#include <string>
#include "Currency.h"
#include "Wallet.h"

using namespace std;

int main() {
	bool b;
	Currency Bob, Joe, BJ;
	Bob.setWholePart(20);
	Joe.setWholePart(0);
	BJ.setWholePart(0);
	Bob.setFractionalPart(20);
	Joe.setFractionalPart(0);
	BJ.setFractionalPart(0);
	Bob.setCurrencyNote("");
	Joe.setCurrencyNote("");
	BJ.setCurrencyNote("");
	Bob.setCurrencyCoin("");
	Joe.setCurrencyCoin("");
	BJ.setCurrencyCoin("");

	b = (Bob <= Joe);
	cout << b << endl;

	system("pause");
	return (0);
}