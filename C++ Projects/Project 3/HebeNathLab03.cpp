//Nathan Hebert 1/19/2016
//Lab 03
//This program asks the user to input a color, and the program will return a wavelength
#include <iostream>
#include <string>
using namespace std;

//Enumeration
enum Color {RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE};

//Function declaration
void displayName(Color colorvalue);
Color inputColor();
double returnColor(int value);

//This is the main driver of the program, it outputs the wavelength
int main()
{
	//Variables
	Color colorvalue;
	string color;
	int answer = 1;

	//Welcome message
	cout << "Welcome, this program allows you to find the wavelength of a color, by inputting a color you want to see the wavelength of.\n";

	//Do while with a sentinel, allows the user to do it again.
	do
	{
		cout << "Input a color: Red, Orange, Yellow, Green, Blue or Purple\n";

		//Function call
		colorvalue = inputColor();
		displayName(colorvalue);

		//output the wavelength
		cout << "The Wavelength value is " << returnColor(colorvalue) << "X e^-7\n";

		//asks the user if the want to try again. then user inputs
		cout << "Would you like to do it again? 1 for yes, 0 for no.\n";
		cin >> answer;

	}
	while (answer != 0);

	return 0;
}

//This function displays the name of the colors from the values in the enum
void displayName(Color colorvalue)
{
	
	//Switch statement that displays the names of the colors
	switch (colorvalue)
	{
	case RED:
		cout << "Your color is Red. ";
		break;
	case ORANGE:
		cout << "Your color is Orange. ";
		break;
	case YELLOW:
		cout << "Your color is Yellow. ";
		break;
	case GREEN:
		cout << "Your color is Green. ";
		break;
	case BLUE:
		cout << "Your color is Blue. ";
		break;
	case PURPLE:
		cout << "Your color is Purple. ";
		break;
	}
}

//This function allows the user to input a color, and it will return an enum value to main
Color inputColor()
{
	//Variables
	string color;
	int value;
	cin >> color;

	//If statements that will return a certain enum for what the user inputs
	if (color == "red" || color == "Red" || color == "RED")
		return RED;

	else if (color == "orange" || color == "orange" || color == "ORANGE")
		return ORANGE;

	else if (color == "yellow" || color == "yellow" || color == "yellow")
		return YELLOW;

	else if (color == "green" || color == "Green" || color == "GREEN")
		return GREEN;

	else if (color == "blue" || color == "Blue" || color == "BLUE")
		return BLUE;

	else if (color == "purple" || color == "Purple" || color == "PURPLE")
		return PURPLE;

	else;
}

//This function gets the value of a certain wavelength and returns that number to main
double returnColor(int value)
{
	//Array which holds wavelength numbers
	double valueArr[6] = {6.5, 5.9, 5.7, 5.1, 4.75, 4};

	//Switch statement that will return a certain value for what color is used
	switch (value)
	{
	case RED:
		return valueArr[0];
		break;
	case ORANGE:
		return valueArr[1];
		break;
	case YELLOW:
		return valueArr[2];
		break;
	case GREEN:
		return valueArr[3];
		break;
	case BLUE:
		return valueArr[4];
		break;
	case PURPLE:
		return valueArr[5];
		break;

	}
}