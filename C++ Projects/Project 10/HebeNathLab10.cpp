//Nathan Hebert 3/8/16
//This is the main driver cpp file
#include "HebeNathCube.h"
#include "HebeNathPoint.h"
#include <iostream>
using namespace std;
using namespace Hebert;

//this is the main driver function
int main()
{
	//Variables and objects
	Point p;
	Square s;
	Cube c;
	double x, y, side;

	//Welcome message
	cout << "Welcome to the program user. This program shows the volume \nof a user inputted cube.";
	
	//Input for our point
	cout << "\nPlease input a point. X:";
	cin >> x;
	cout << "Y:";
	cin >> y;
	
	//Sets the point into the class
	p.setX(x);
	p.setY(y);

	//Input for the side
	cout << "Please enter a side length for your square: ";
	cin >> side;

	//IF side is negative you re-enter it
	if (side < 0)
	{
		cout << "You cannot input a negative number. Please enter a new side: ";
		cin >> side;
	}

	//Sets the side lenght for both the square and cube classes
	s.setSide(side);
	c.setSide(side);

	//Outputs all of the data
	cout << "\nThe point you have entered is: " << "(" << p.getX() << "," << p.getY() << ")";
	cout << "\nYour side length is: " << s.getSide();
	cout << "\nYour area and volume are: " << "\nSurface Area: " << c.getArea() << "\nVolume: " << c.getVolume() << endl;

	return 0;
}
