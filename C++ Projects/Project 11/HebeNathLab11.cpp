//Nathan Hebert
//3/15/16
//This is the main driver program
#include "HebeNathSquare.h"
#include "HebeNathTriangle.h"
#include "HebeNathCircle.h"
#include "HebeNathRectangle.h" 
#include "HebeNathShape.h"
#include <iostream>
using namespace std;
using namespace Hebert;

//Function declaration
void displayShape(Shape &);

//Main driver
int main()
{
	//Variables and objects
	Square s;
	Rectangle r;
	Circle c;
	Triangle t;
	double var;
	
	//Welcome message
	cout << "Welcome to this program.";
	cout << "\nThis program will take a shape, and display information about that shape";

	//Enters data for a square
	cout << "\nPlease enter info about a square: ";
	cout << "\nEnter a Side length: ";
	cin >> var;
	s.setSide(var);

	//Data for a rectangle
	cout << "\nPlease enter info about a Rectangle";

		//Enters data for a length
		cout << "\nEnter a length: ";
		cin >> var;
		r.setLength(var);

		//enters data for a width
		cout << "\nEnter a width: ";
		cin >> var;
		r.setWidth(var);

	//Data for a circle
	cout << "\nPlease enter info about a Circle";
	cout << "\nEnter a radius: ";
	cin >> var;
	c.setRadius(var);

	//Data for a triangle
	cout << "\nPlease enter info about a Triangle";

		//Enter data for opposite
		cout << "\nEnter and opposite length: ";
		cin >> var;
		t.setOpp(var);

		//Enter data for adjacent
		cout << "\nEnter and adjacent length: ";
		cin >> var;
		t.setAdj(var);

		//Enter data for Hypotenuse
		cout << "\nEnter and Hypotenuse length: ";
		cin >> var;
		t.setHyp(var);

		//Fucntion call, that gives displayShape a class object to output the data
		displayShape(s);
		displayShape(r);
		displayShape(c);
		displayShape(t);

	return 0;
}

//Function to output the data using shape object
void displayShape(Shape & shape)
{
	shape.print();
}