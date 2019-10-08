#include <iostream>
#include "Wallet.h"
#include "Currency.h"


using namespace std;
void welcome();
int inputParser(double &amount, int choice[]);
bool notEmpty(int index, Wallet &gucci);

int main()
{
	welcome();

	int choice[5],
		loop[5];
	double amount = 0;
	bool hasMoney = 0;

	Wallet gucci;

	cout << "Please enter the amount of money you have in your wallet:" << endl;
	cout << "Dollar:" << endl;
	cin >> gucci[0];
	cout << "Euro:" << endl;
	cin >> gucci[1];
	cout << "Yen:" << endl;
	cin >> gucci[2];
	cout << "Rupee:" << endl;
	cin >> gucci[3];
	cout << "Yuan:" << endl;
	cin >> gucci[4];
	do
	{
		amount = 0;
		for (int x = 0; x <= 4; x++)
		{
			loop[x] = 1;
		}
		for (int x = 0; x <= 4; x++)
		{
			choice[x] = 0;
		}
		cout << "\n\n=======================================================\n";
		cout << "Menu: " << endl;
		cout << "1. Add money to your wallet." << endl;
		cout << "2. Subtract money from your wallet." << endl;
		cout << "3. Display your wallet." << endl;
		cout << "4. Empty Currencies from your wallet." << endl;
		cout << "5. Check if your wallet is empty." << endl;
		cout << "6. Exit" << endl;
		cout << "=======================================================\n\n";

		cin >> choice[0];
		if (choice[0] == 1)
		{
			// add to currency
			do
			{
				cin.ignore();

				cout << "Add to specific currency by entering in this form 'note, whole amount, fractioonal amound, coin'" << endl;
				cout << "For example: Dollar, 5, 2, Cent: " << endl;
				cout << "Enter '6' to go Back" << endl;
			
				double amount;

				inputParser(amount, choice);

				if (choice[1] == 1)
				{
					gucci.addMoney(gucci[0].getCurrencyNote(), amount);
					cout << amount << ' ' << gucci[0].getCurrencyNote() <<" has been added to the currency" << endl;
					loop[1] = 0;
				}
				else if (choice[1] == 2)
				{
					gucci.addMoney(gucci[1].getCurrencyNote(), amount);
					cout << amount << ' ' << gucci[1].getCurrencyNote() << " has been added to the currency" << endl;
					loop[1] = 0;
				}
				else if (choice[1] == 3)
				{
					gucci.addMoney(gucci[2].getCurrencyNote(), amount);
					cout << amount << ' ' << gucci[2].getCurrencyNote() << " has been added to the currency" << endl;
					loop[1] = 0;
				}
				else if (choice[1] == 4)
				{
					gucci.addMoney(gucci[3].getCurrencyNote(), amount);
					cout << amount << ' ' << gucci[3].getCurrencyNote() << " has been added to the currency" << endl;
					loop[1] = 0;
				}
				else if (choice[1] == 5)
				{
					gucci.addMoney(gucci[4].getCurrencyNote(), amount);
					cout << amount << ' ' << gucci[4].getCurrencyNote() << " has been added to the currency" << endl;
					loop[1] = 0;
				}
				else if (choice[1] == 6)
				{
					loop[1] = 0;
				}
			} while (loop[1]);
		}
		else if (choice[0] == 2)
		{
			// subtract money from currencies
			do
			{
				cin.ignore();

				cout << "Subtract from specific currency by entering in this form 'note, whole amount, fractional amount, coin'" << endl;
				cout << "For example: Dollar, 5, 2, Cent: " << endl;
				cout << "Enter '6' to go Back" << endl;
				
				double amount;
				
				inputParser(amount, choice);

				if (choice[1] == 1)
				{
					if (notEmpty(0, gucci)) {
						gucci.removeMoney(gucci[0].getCurrencyNote(), amount);
						cout << amount << " " << gucci[0].getCurrencyNote() << " " << " has been subtracted from your currency" << endl;
					}
					else {
						cout << "There is no " << gucci[0].getCurrencyNote() << " in your wallet" << endl;
					}
					loop[1] = 0;
				}
				else if (choice[1] == 2)
				{
					if (notEmpty(1, gucci)) {
						gucci.removeMoney(gucci[1].getCurrencyNote(), amount);
						cout << amount << " " << gucci[1].getCurrencyNote() << " " << " has been subtracted from your currency" << endl;
					}
					else {
						cout << "There is no " << gucci[1].getCurrencyNote() << " in your wallet" << endl;
					}
					loop[1] = 0;
				}
				else if (choice[1] == 3)
				{
					if (notEmpty(2, gucci)) {
						gucci.removeMoney(gucci[2].getCurrencyNote(), amount);
						cout << amount << " " << gucci[2].getCurrencyNote() << " " << " has been subtracted from your currency" << endl;
					}
					else {
						cout << "There is no " << gucci[2].getCurrencyNote() << " in your wallet" << endl;
					}
					loop[1] = 0;
				}
				else if (choice[1] == 4)
				{
					if (notEmpty(3, gucci)) {
						gucci.removeMoney(gucci[3].getCurrencyNote(), amount);
						cout << amount << " " << gucci[3].getCurrencyNote() << " " << " has been subtracted from your currency" << endl;
					}
					else {
						cout << "There is no " << gucci[3].getCurrencyNote() << " in your wallet" << endl;
					}
					loop[1] = 0;
				}
				else if (choice[1] == 5)
				{
					if (notEmpty(4, gucci)) {
						gucci.removeMoney(gucci[4].getCurrencyNote(), amount);
						cout << amount << " " << gucci[4].getCurrencyNote() << " " << " has been subtracted from your currency" << endl;
					}
					else {
						cout << "There is no " << gucci[4].getCurrencyNote() << " in your wallet" << endl;
					}
					loop[1] = 0;
				}
				else if (choice[1] == 6)
				{
					loop[1] = 0;
				}
			} while (loop[1]);
		}
		else if (choice[0] == 3)
		{
			// display currency
			do
			{
				cout << "\n\n===============================================\n";
				cout << "Choose what you would like to DISPLAY: " << endl;
				cout << "1. Dollar" << endl;
				cout << "2. Euro" << endl;
				cout << "3. Yen" << endl;
				cout << "4. Rupee" << endl;
				cout << "5. Yuan" << endl;
				cout << "6. Your entire wallet" << endl;
				cout << "7. Back" << endl;
				cin >> choice[1];
				cout << "\n===============================================\n\n";

				if (choice[1] == 1)
				{
					cout << gucci[0] << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 2)
				{
					cout << gucci[1] << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 3)
				{
					cout << gucci[2] << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[3] == 4)
				{
					cout << gucci[0] << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[4] == 5)
				{
					cout << gucci[0] << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 6)
				{
					cout << gucci[0] << endl;
					cout << gucci[1] << endl;
					cout << gucci[2] << endl;
					cout << gucci[3] << endl;
					cout << gucci[4] << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 7)
				{
					loop[1] = 0;
				}
			} while (loop[1]);
		}
		else if (choice[0] == 4)
		{
			// empty currency
			do
			{
				cout << "Choose what you would like to EMPTY: " << endl;
				cout << "1. Dollar" << endl;
				cout << "2. Euro" << endl;
				cout << "3. Yen" << endl;
				cout << "4. Rupee" << endl;
				cout << "5. Yuan" << endl;
				cout << "6. Your entire wallet" << endl;
				cout << "7. Back" << endl;
				cin >> choice[1];
				if (choice[1] == 1)
				{
					amount = gucci[0].getWholePart() + gucci[0].getFractionalPart();
					cout << gucci[0] << "has been subtracted from your wallet." << endl << endl;
					gucci.removeMoney(gucci[0].getCurrencyNote(), amount);
					cout << "Your currency of " << gucci[0].getCurrencyNote() << " now shows ";
					cout << gucci[0] << endl;

					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 2)
				{
					amount = gucci[1].getWholePart() + gucci[1].getFractionalPart();
					cout << gucci[1] << "has been subtracted from your wallet." << endl << endl;
					gucci.removeMoney(gucci[1].getCurrencyNote(), amount);
					cout << "Your currency of " << gucci[1].getCurrencyNote() << " now shows ";
					cout << gucci[1] << endl;

					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;

				}
				else if (choice[1] == 3)
				{
					amount = gucci[2].getWholePart() + gucci[2].getFractionalPart();
					cout << gucci[2] << "has been subtracted from your wallet." << endl << endl;
					gucci.removeMoney(gucci[2].getCurrencyNote(), amount);
					cout << "Your currency of " << gucci[2].getCurrencyNote() << " now shows ";
					cout << gucci[2] << endl;

					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;

				}
				else if (choice[1] == 4)
				{
					amount = gucci[3].getWholePart() + gucci[3].getFractionalPart();
					cout << gucci[3] << "has been subtracted from your wallet." << endl << endl;
					gucci.removeMoney(gucci[3].getCurrencyNote(), amount);
					cout << "Your currency of " << gucci[3].getCurrencyNote() << " now shows ";
					cout << gucci[3] << endl;

					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;

				}
				else if (choice[1] == 5)
				{
					amount = gucci[4].getWholePart() + gucci[4].getFractionalPart();
					cout << gucci[4] << "has been subtracted from your wallet." << endl << endl;
					gucci.removeMoney(gucci[4].getCurrencyNote(), amount);
					cout << "Your currency of " << gucci[4].getCurrencyNote() << " now shows ";
					cout << gucci[4] << endl;

					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 6)
				{
					double amount[5];
					for (int i = 0; i < 5; i++) {
						cout << gucci[i].getWholePart() << "." << gucci[i].getFractionalPart() << " " << gucci[i].getCurrencyNote() <<" has been subtracted from your wallet" << endl;
					}

					gucci.emptyWallet();
	
					cout << "Your currency of " << gucci[0].getCurrencyNote() << " now shows ";
					cout << gucci[0] << endl;
					cout << "Your currency of " << gucci[1].getCurrencyNote() << " now shows ";
					cout << gucci[1] << endl;
					cout << "Your currency of " << gucci[2].getCurrencyNote() << " now shows ";
					cout << gucci[2] << endl;
					cout << "Your currency of " << gucci[3].getCurrencyNote() << " now shows ";
					cout << gucci[3] << endl;
					cout << "Your currency of " << gucci[4].getCurrencyNote() << " now shows ";
					cout << gucci[4] << endl;

					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 7)
				{
					loop[1] = 0;
				}
			} while (loop[1]);
		}
		else if (choice[0] == 5)
		{
			// check if has currency
			do
			{
				cout << "Choose which Currency you would like to CHECK: " << endl;
				cout << "1. Dollar" << endl;
				cout << "2. Euro" << endl;
				cout << "3. Yen" << endl;
				cout << "4. Rupee" << endl;
				cout << "5. Yuan" << endl;
				cout << "6. Back" << endl;
				cin >> choice[1];
				if (choice[1] == 1)
				{
					hasMoney = gucci.hasCurrency(gucci[0].getCurrencyNote());
					if (!hasMoney)
						cout << "Your currency of " << gucci[0].getCurrencyNote() << " is empty. " << endl;
					else if (hasMoney)
						cout << "Your currency of " << gucci[0].getCurrencyNote() << " is not empty. " << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 2)
				{
					hasMoney = gucci.hasCurrency(gucci[1].getCurrencyNote());
					if (!hasMoney)
						cout << "Your currency of " << gucci[1].getCurrencyNote() << " is empty. " << endl;
					else if (hasMoney)
						cout << "Your currency of " << gucci[1].getCurrencyNote() << " is not empty. " << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 3)
				{
					hasMoney = gucci.hasCurrency(gucci[2].getCurrencyNote());
					if (!hasMoney)
						cout << "Your currency of " << gucci[2].getCurrencyNote() << " is empty. " << endl;
					else if (hasMoney)
						cout << "Your currency of " << gucci[2].getCurrencyNote() << " is not empty. " << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 4)
				{
					hasMoney = gucci.hasCurrency(gucci[3].getCurrencyNote());
					if (!hasMoney)
						cout << "Your currency of " << gucci[3].getCurrencyNote() << " is empty. " << endl;
					else if (hasMoney)
						cout << "Your currency of " << gucci[3].getCurrencyNote() << " is not empty. " << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 5)
				{
					hasMoney = gucci.hasCurrency(gucci[4].getCurrencyNote());
					if (!hasMoney)
						cout << "Your currency of " << gucci[4].getCurrencyNote() << " is empty. " << endl;
					else if (hasMoney)
						cout << "Your currency of " << gucci[4].getCurrencyNote() << " is not empty. " << endl;
					cout << "Press enter to continue. " << endl;
					cin.ignore();
					cin.get();
					loop[1] = 0;
				}
				else if (choice[1] == 6)
				{
					loop[1] = 0;
				}
			} while (loop[1]);
		}
		else if (choice[0] == 6)
		{
			// exit proram
			cout << "Thank you for using the program" << endl;
			loop[0] = 0;
		}
		else
		{
			cout << "Enter a number from 1-5. PLease try again." << endl;
		}
	} while (loop[0]);

	return 0;
}



/******************************************************************
Welcome function:

presents welcome message to user
******************************************************************/
void welcome() {
	cout << "=========================================================\n\n";
	cout << "Welcome " << endl;
	cout << "=========================================================\n"<< endl;
}



/******************************************************************
notEmpty function:

function returns a boolean value to check if a value greater than 
zero of a certain currency exists in the wallet
******************************************************************/
bool notEmpty(int index, Wallet &gucci) {
	return gucci.hasCurrency(gucci[index].getCurrencyNote());
}



/******************************************************************
inputParser function:

Takes a string of from user input in the form of 'note, whole 
amount, coin, fractional amount'. Takes relevant information from
the string such as what type of currency it is and how much
money the user wants to alter
******************************************************************/
int inputParser(double &amount, int choice[]) 
{
	char input[100];
	char stringWholeAmount[100];
	char stringFractionAmound[100];
	int wholeAmount, fractionalAmount;
	cin.getline(input, 100, '\n');

	int index = 0;
	if (input[0] == 'D')
		choice[1] = 1;
	else if (input[0] == 'E')
		choice[1] = 2;
	else if (input[0] == 'Y' && input[1] == 'e')
		choice[1] = 3;
	else if (input[0] == 'R')
		choice[1] = 4;
	else if (input[0] == 'Y')
		choice[1] = 5;
	else {
		choice[1] = 6;
		return 0;
	}
	while (input[index] != ',') {
		index++;
	}
	index += 2;
	int j = 0;
	while (input[index] != ',') {
		stringWholeAmount[j] = input[index];
		j++;
		index++;
	}
	index += 2;
	j = 0;
	while (input[index] != ',') {
		stringFractionAmound[j] = input[index];
		index++;
		j++;
	}
	wholeAmount = atoi(stringWholeAmount);
	fractionalAmount = atoi(stringFractionAmound);
	amount = wholeAmount;
	amount += fractionalAmount * 0.01;
}