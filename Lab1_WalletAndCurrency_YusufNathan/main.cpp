#include <iostream>
#include "Wallet.h"
#include "Currency.h"

// test comparison and cin operator overloading
// fix delete malloc error finihs wallet
// finish io 
// polymorphic construction
// test wallet

using namespace std;

int main()
{
	int choice[5],
		loop[5];
	do
	{
		for (int x = 0; x <= 4; x++)
		{
			loop[x] = 1;
		}
		for (int x = 0; x <= 4; x++)
		{
			choice[x] = 0;
		}
		cout << "Menu: " << endl;
		cout << "1. Add money to your wallet." << endl;
		cout << "2. Subtract money from your wallet." << endl;
		cout << "3. Display your wallet." << endl;
		cout << "4. Empty your entire wallet." << endl;
		cout << "5. Exit" << endl;
		cin >> choice[0];

		if (choice[0] == 1)
		{
			do
			{
				// add money to currencies
				cout << "Choose which Currency you would like to ADD: " << endl;
				cout << "1. Dollar" << endl;
				cout << "2. Euro" << endl;
				cout << "3. Yen" << endl;
				cout << "4. Rupee" << endl;
				cout << "5. Yuan" << endl;
				cout << "6. Back" << endl;
				cin >> choice[1];
				if (choice[1] == 1)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					//cin
				}
				else if (choice[1] == 2)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					//cin 
				}
				else if (choice[1] == 3)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					//cin 
				}
				else if (choice[1] == 4)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					//cin 
				}
				else if (choice[1] == 5)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					//cin 
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
				cout << "Choose which Currency you would like to SUBTRACT: " << endl;
				cout << "1. Dollar" << endl;
				cout << "2. Euro" << endl;
				cout << "3. Yen" << endl;
				cout << "4. Rupee" << endl;
				cout << "5. Yuan" << endl;
				cout << "6. Back" << endl;
				cin >> choice[1];
				if (choice[1] == 1)
				{
					cout << "Type in the amount you want to subtract in your wallet: " << endl;
					//cin 
				}
				else if (choice[1] == 2)
				{
					cout << "Type in the amount you want to subtract in your wallet: " << endl;
					//cin 
				}
				else if (choice[1] == 3)
				{
					cout << "Type in the amount you want to subtract in your wallet: " << endl;
					//cin 
				}
				else if (choice[1] == 4)
				{
					cout << "Type in the amount you want to subtract in your wallet: " << endl;
					//cin 
				}
				else if (choice[1] == 5)
				{
					cout << "Type in the amount you want to subtract in your wallet: " << endl;
					//cin 
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
				cout << "Choose what you would like to DISPLAY: " << endl;
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
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 2)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 3)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 4)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 5)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 6)
				{
					cout << "Press enter to continue. " << endl;
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
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 2)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 3)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 4)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 5)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 6)
				{
					cout << "Press enter to continue. " << endl;
				}
				else if (choice[1] == 7)
				{
					loop[1] = 0;
				}
			} while (loop[1]);
		}
		else if (choice[0] == 5)
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

	system("pause");
	return 0;
}
