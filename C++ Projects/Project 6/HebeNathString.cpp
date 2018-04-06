//Nathan Hebert
//2/9/16
//This cpp file contains the member functions
#include <iostream>
#include "HebeNathString.h"
using namespace std;

//This is namespace Hebert
namespace Hebert
{
	//Default constructor
	String::String()
	{
		stringptr_ = 0;
	}

	//Explicit Constructor
	String::String(char string[])
	{
		//Dynamic allocates the length of the string plus 1
		stringptr_ = new char[strlen(string) + 1];

		//Variable that counts the length of the string
		int len = strlen(string) + 1;

		//Sets the last character to the null pointer
		stringptr_[len - 1] = '\0';	
	}

	//Copies the string from string[] to stringptr
	void String::setString(char string[])
	{
		//Loop that copies the string char array into stringptr_
		for (int i = 0; i <= strlen(string); i++)
		{
			stringptr_[i] = string[i];
		}
	}

	//This member function outputs the string
	void String::printString()
	{
		//Outputs the sentence
		for (int i = 0; stringptr_[i] != '\0'; i++)
		{
			cout << stringptr_[i];
		}
		cout << endl << endl;
	}
			
	//This string returns the size of the string
	int String::returnSize()
	{
		//Variable
		int size = 0;
		
		//While loop to count the characters in the sentence
		while (stringptr_[size] != '\0')
			{
				size++;
			}
		return size;
	}

	//Destructor
	String::~String()
	{
		delete stringptr_;
	}

}