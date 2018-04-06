//Nathan Hebert
//2/9/16
//This cpp file contains the driver program
#include <iostream>
#include "HebeNathString.h"
using namespace std;
using namespace Hebert;

int main()
{
	//Variables
	int size;
	char sentence[500] = { NULL };

	//Welcome message
	cout << "Welcome. This program allows you to put in a sentence, or sequence of words and symbols.\n"
	     << "Please enter a sentence:\n";
	
	//Gets the line of sentence
	cin.getline(sentence, 500);

	//Class object s, set to the explicit value sentence
	String s(sentence);
	
	//Function call
	size = s.returnSize();
	s.setString(sentence);
	
	//Outputs the size and sentence
	cout << "\nThe number of characters your sentence has is: " << size << endl << endl;
	cout << "Your sentence is: \n";
	s.printString();

	return 0;
}