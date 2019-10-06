#include <iostream>
#include <string>
#include "Currency.h"
#include "Wallet.h"
using namespace std;

int main() {
	Currency Bob, Joe, BJ;
	Bob.setWholePart(6);
	Joe.setWholePart(6);
	BJ.setWholePart(0);
	Bob.setFractionalPart(5);
	Joe.setFractionalPart(5);
	BJ.setFractionalPart(6);
	Bob.setCurrencyNote("");
	Joe.setCurrencyNote("");
	BJ.setCurrencyNote("");
	Bob.setCurrencyCoin("");
	Joe.setCurrencyCoin("");
	BJ.setCurrencyCoin("");

	BJ = Bob + Joe;

	cout << BJ << endl;

	system("pause");
	return (0);
}