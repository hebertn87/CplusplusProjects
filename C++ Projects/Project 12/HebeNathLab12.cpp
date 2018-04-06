//Nathan Hebert
//3/22/16
#include <iostream>
#include "HebeNathexceptions.h"
using namespace Hebert;
using namespace std;

//Function declaration
void overflowException();
void subscriptException();
void memoryException();

//This is the main driver program
int main()
{
	//Variable
	int answer;

	//Welcome message
	cout << "Welcome User. This program allows you to text exceptions";

	//Do while loop for the menu
	do
	{
		//Output for the menu
		cout << "\nPlease enter a number for a choice you have";
		cout << "\n1. Overflow Exception"
			<< "\n2. Subscript Exception"
			<< "\n3. Memory Exception"
			<< "\n4. Exit\n";

		cin >> answer;

		//Try block
		try
		{
			//Switch statements
			switch (answer)
			{
			case 1:
				overflowException();
				break;
			case 2:
				subscriptException();
				break;
			case 3:
				memoryException();
				break;
			default:
				break;
			}
		}
		//Catch blocks
		catch (OverflowException error)
		{
			error.what();
		}
		catch (MemoryException error)
		{
			error.what();
		}
		catch (SubscriptException error)
		{
			error.what();
		}
	} while (answer != 4);
	
	return 0;
}

//This function checks for overflow exception
void overflowException()
{
	OverflowException except("Error: Overflow");

	int over = 2147480000;

	//While loop to check overflow
	while (over < 2147483647)
	{		
		if (over + 1 < over)
		{
			throw except;
		}
		over++;
		cout << "Number is: " << over << endl;
	}
}

//This function checks for the subscript exception
void subscriptException()
{
	SubscriptException except("Error: Subscript");

	const int sub = 10;
	int arr[sub];
	
	//For loop to check the subscript
	for (int i = 0;   ; i++)
	{
		
		if (i > sub)
		{
			throw except;
		}

		arr[i] = i;
		cout << "Subscript is: " << arr << endl;
	}
}

//This function checks for a memory exception
void memoryException()
{
	MemoryException except("Error: Memory overflow");

	//Try block
	try
	{

		for (int i = 1;  ; i *= 10)
		{
			double * a = new double[i];
			delete a;
		}
	}
	//Catch for the bad allocation
	catch (bad_alloc a)
	{ 
		throw except;
	}
}