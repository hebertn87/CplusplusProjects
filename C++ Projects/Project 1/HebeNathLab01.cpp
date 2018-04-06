//Nathan Hebert 1/5/2016
//This program allows the user to enter a sentence up to 79 characters
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

//Function Declaration
char * getString(char sentence[]);
char countWords(char newArray[]);


//This is the driver function
int main()
{
	//Welcome message
	cout << "Welcome, This program allows you to enter a sentence, up to 79 characters, and find out how long the sentence is.\n";

	//Variables
	int size = 0;
	char newArray[80];
	int exit = 1;
	char * ptr = NULL;   //Pointer value

						 //Do while loop with a sentinel value.
	do
	{

		ptr = getString(newArray);

		countWords(ptr);

		cout << "Would like to do it again? Press 0 for exit, 1 for continue.\n";
		cin >> exit;
		cin.ignore();

	} while (exit != 0);

	return 0;
}

char * getString(char sentence[])
{
	int i = 0;
	int size = 0;   //set size

					//Message for input a sentence
	cout << "Please enter a sentence.\n";


	cin.getline(sentence, 80);    //Input for the array sentence, includes getline 



								  //While loop to count how many letters including spaces.
	while (sentence[i] != '\0')
	{
		size++;
		i++;
	}

	char * newArray = new char[size + 1];    //Dynamically allocated space


											 //For loop that copies the array to the new array.
	for (int i = 0; i <= size; i++)
	{
		newArray[i] = sentence[i];
	}

	return newArray;
}

//This function calls countWords, and figures out how many words in the string
char countWords(char newArray[])
{
	//Variables
	int total = 1;
	int spaces = 0;

	//Do while loop for counting the words
	do
	{
		if (isspace(newArray[spaces++]))
		{
			total++;
		}
	} while (newArray[spaces] != '\0');

	//Output of the words
	cout << "Your total words are: " << total << endl;

	return total;
}