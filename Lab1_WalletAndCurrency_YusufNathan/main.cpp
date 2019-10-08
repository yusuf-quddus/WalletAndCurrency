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
		cout << "Menu: " << endl;
		cout << "1. Add money to your wallet." << endl;
		cout << "2. Subtract money from your wallet." << endl;
		cout << "3. Display your wallet." << endl;
		cout << "4. Empty Currencies from your wallet." << endl;
		cout << "5. Check if your wallet is empty." << endl;
		cout << "6. Exit" << endl;
		cin >> choice[0];
		if (choice[0] == 1)
		{
			do
			{
			    cin.ignore();
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
					cin >> amount;
					gucci.addMoney(gucci[0].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 2)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					cin >> amount;
					gucci.addMoney(gucci[1].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 3)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					cin >> amount;
					gucci.addMoney(gucci[2].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 4)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					cin >> amount;
					gucci.addMoney(gucci[3].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 5)
				{
					cout << "Type in the amount you want to add to your wallet: " << endl;
					cin >> amount;
					gucci.addMoney(gucci[4].getCurrencyNote(), amount);
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
					cout << "Type in the amount you want to subtract to your wallet: " << endl;
					cin >> amount;
					gucci.removeMoney(gucci[0].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 2)
				{
					cout << "Type in the amount you want to subtract to your wallet: " << endl;
					cin >> amount;
					gucci.removeMoney(gucci[1].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 3)
				{
					cout << "Type in the amount you want to subtract to your wallet: " << endl;
					cin >> amount;
					gucci.removeMoney(gucci[2].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 4)
				{
					cout << "Type in the amount you want to subtract to your wallet: " << endl;
					cin >> amount;
					gucci.removeMoney(gucci[3].getCurrencyNote(), amount);
					loop[1] = 0;
				}
				else if (choice[1] == 5)
				{
					cout << "Type in the amount you want to subtract to your wallet: " << endl;
					cin >> amount;
					gucci.removeMoney(gucci[4].getCurrencyNote(), amount);
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
				    int amount[5];
				    amount[0] = gucci[0].getWholePart() + gucci[0].getFractionalPart();
				    amount[1] = gucci[1].getWholePart() + gucci[1].getFractionalPart();
				    amount[2] = gucci[2].getWholePart() + gucci[2].getFractionalPart();
				    amount[3] = gucci[3].getWholePart() + gucci[3].getFractionalPart();
				    amount[4] = gucci[4].getWholePart() + gucci[4].getFractionalPart();
				    cout << gucci[0] << "has been subtracted from your wallet." << endl << endl;
				    cout << gucci[1] << "has been subtracted from your wallet." << endl << endl;
				    cout << gucci[2] << "has been subtracted from your wallet." << endl << endl;
				    cout << gucci[3] << "has been subtracted from your wallet." << endl << endl;
				    cout << gucci[4] << "has been subtracted from your wallet." << endl << endl;
					gucci.removeMoney(gucci[0].getCurrencyNote(), amount[0]);
					gucci.removeMoney(gucci[1].getCurrencyNote(), amount[1]);
					gucci.removeMoney(gucci[2].getCurrencyNote(), amount[2]);
					gucci.removeMoney(gucci[3].getCurrencyNote(), amount[3]);
					gucci.removeMoney(gucci[4].getCurrencyNote(), amount[4]);
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
			// subtract money from currencies
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
