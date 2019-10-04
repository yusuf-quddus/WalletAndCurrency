# WalletAndCurrency

### Programming problem: Simulate your wallet and its contents when on a foreign trip.

A. Create a currency class with four attributes - currency note, whole parts and fractional parts and currency coin such that 100 fractional parts equals 1 whole part.

B. Create 5 derived classes for the following currencies - Dollar, Euro, Yen, Rupee and Yuan. I know this program can be done without inheritance but it is a requirement for this lab. You will be adding and subtracting currency values using the form:

* Dollar, 1, 25, cent
* Euro, 3, 33, cent
* Yen, 100, 54, sen
* Rupee, 7, 11, paise
* Yuan, 50, 86, fen

C. Define 3 or 4 overloaded operators to add, subtract and compare different currency objects - care should be taken that you can only perform these operation on objects of the same currency. Also, take care that fractional parts roll into whole parts.

D. Define an overloaded input stream operator to accept values of any currency as well as an overloaded output stream operator to write out the value of the currency..

E. When initializing currency objects, your code should demonstrate polymorphic construction.  Your constructors should also use initialization lists.

F. Now, define a Wallet class that will contain the 5 individual currency types above and will implement the following - number of individual currency types whose value is non-zero, check if a currency type exists with non-zero value in the wallet, add money by currency type, remove money by currency type, zero out all currency types, check if wallet is empty. What this means is that your wallet can only contain one object of each currency type. To add or remove money into/from wallet, check if currency has non-zero value in the wallet.  If so, add or remove the amount specified.

G. Your main should pre-define the 5 different currency types as specified above in the wallet in the form of the base currency array of zero values - this will help you demonstrate the polymorphic construction.  Demonstrate the overloaded subscript operator for the Wallet class.  User should be able to add or remove as many currency values for any of the five currency types.  The user should also be able to output the total value by name of the currencies in the wallet.  Finally they should be able to empty the wallet and print relevant information about the operation.  User Interactivity is extremely important - give due consideration to it.

 

## Things to remember:

Make any relevant assumptions that you may need but state them clearly in your name/comment block at the top. 
Remember to document your methods adequately as well as any other relevant comments. Also, provide necessary pseudocode in the program in the main.
This program will need individual class declaration and implementation files for the currency and wallet classes and a file for your main, though you may combine various currencies into the same set of files.  Simply put - your project will consist of a minimum of 2 .h and 3 .cpp files.
Do not write your methods as inline in your class declaration if they will be more than 2 statements - define them in their own cpp files.
Name your solution and zip file as 'lab1_<initials 1>_<initials 2>, i.e. if Joe X Blow and Jane Y Doe are partners, then the name will be 'lab1_jxb_jyd' or 'lab1_yjd_jxb'.
