//Nathan Hebert
//4/5/16
//This program allows the user to specify an array size and then allow the user to add or remove elements and display the array.
#include <iostream>
#include <string>
#include "HebeNatharray.h"
using namespace std;
using namespace Hebert;

//This is the main driver function
int main()
{
	//Variables and objects
	int size, answer;
	string newitem;


	//Welcome message
	cout << "Welcome. This program allows you to create enter a collection of strings, \nAdd or remove to the end of the list, and display the list";

	//Input a size
	cout << "\nPlease input a size for your array: ";
	cin >> size;

	//Creates an object pointing do a dynamically allocated array
	Array<string> item(size);

	//Input into the array
	cout << "\nPlease input the items for your array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> item[i];
	}

	//Do while loop 
	do
	{
		//Menu
		cout << "\n1. Add an element."
			<< "\n2. Remove an element."
			<< "\n3. Display the Array."
			<< "\n4. Exit.";

		//Iput a choice
		cout << "\nPlease input a choice (number):";
		cin >> answer;

		//Switch statement
		switch (answer)
		{
		case 1:
			cout << "\nPlease type an item to be added: ";
			cin.ignore();
			getline(cin, newitem);
			item.addElement(newitem);
			break;
		case 2:
			cout << "\nRemoving the last element of the array.";
			item.removeElement();
			break;
		case 3:
			cout << "\nNow Displaying the array.";
			item.displayArray();
			break;
		case 4:
			break;
		}
	} while (answer != 4);

	return 0;
}