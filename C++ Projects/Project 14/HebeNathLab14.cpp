//Nathan Hebert
//04/12/16
#include <iostream>
#include "HebeNathList.h"
using namespace std;

//This is the main driver function
int main()
{
	//Variables and objects
	char answer;
	int item, count = 1, choice = 0, value = 0;
	LinkList<int> list;

	//Welcome Message
	cout << "Welcome. This program allows you to append, remove and display a list.";
	cout << "\nPlease enter some intial values for our int list.\n";

	//Do while lop to enter items into the list
	do
	{
		cout << "Enter Item " << count << ":";
		cin >> item;
		list.append(item);
		count++;
		cout << "Would you like to enter another? (Y/N)";
		cin >> answer;
	} while (answer == 'y' || answer == 'Y');
	
	//Do while loop for our switch statement, to allow us to append, remove, and display items as we please
	do
	{
		cout << "\n**************************"
			<< "\n*1. Append an Item.      *"
			<< "\n*2. Delete an Item.      *"
			<< "\n*3. Display the List     *"
			<< "\n*4. Exit                 *"
			<< "\n**************************";

		cout << "\nPlease enter a choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\nPlease enter the value of the item you wish to append.";
			cin >> value;
			list.append(value);
			break;
		case 2:
			cout << "\nPlease enter the value of the item you wish to delete.";
			cin >> value;
			list.remove(value);
			break;
		case 3:
			cout << "Displaying list:\n";
			list.display();
			break;
		case 4:
			cout << "Exiting program. Goodbye.\n";
			break;
		}

	} while (choice != 4); //If choice is 4, it exits

	return 0;
}
