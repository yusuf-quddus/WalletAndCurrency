# WalletAndCurrency

### Simulate a wallet and its contents when on a foreign trip.

A. A currency class with four attributes - currency note, whole parts and fractional parts and currency coin such that 100 fractional parts equals 1 whole part.

B. 5 derived classes for the following currencies - Dollar, Euro, Yen, Rupee and Yuan:

* Dollar, 1, 25, cent
* Euro, 3, 33, cent
* Yen, 100, 54, sen
* Rupee, 7, 11, paise
* Yuan, 50, 86, fen

C. Defined 3 or 4 overloaded operators to add, subtract and compare different currency objects

D. Defined an overloaded input stream operator to accept values of any currency as well as an overloaded output stream operator to write out the value of the currency..

E. When initializing currency objects, demonstrates polymorphic construction.  Your constructors should also use initialization lists.

F. Defined a Wallet class that will contain the 5 individual currency types above and will implement the following - number of individual currency types whose value is non-zero, check if a currency type exists with non-zero value in the wallet, add money by currency type, remove money by currency type, zero out all currency types, check if wallet is empty. What this means is that your wallet can only contain one object of each currency type. To add or remove money into/from wallet, check if currency has non-zero value in the wallet.  If so, add or remove the amount specified.

G. main pre-defines the 5 different currency types as specified above in the wallet in the form of the base currency array of zero values.  Demonstrate the overloaded subscript operator for the Wallet class.  User should be able to add or remove as many currency values for any of the five currency types.  The user should also be able to output the total value by name of the currencies in the wallet.  Finally they should be able to empty the wallet and print relevant information about the operation.
