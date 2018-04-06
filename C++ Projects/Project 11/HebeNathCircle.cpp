//Nathan Hebert
//3/15/16
//This is the cpp file for the circle class
#include "HebeNathCircle.h"
#include <iostream>
using namespace std;

//Namespace hebert
namespace Hebert
{
	//Constructor
	Circle::Circle(double radius)
	{
		radius_ = radius;
	}

	//Set radius function
	void Circle::setRadius(double radius)
	{
		radius_ = radius;
	}

	//Get radius function
	double Circle::getRadius() const
	{
		return radius_;
	}

	//Get area function
	double Circle::getArea() const
	{
		return radius_ * radius_ * PI_;
	}

	//Get perimeter function
	double Circle::getPerimeter() const
	{
		return 2 * PI_ * radius_;
	}

	//print function
	void Circle::print() const
	{
		cout << "\nShape: Circle";
		cout << "\nRadius: " << radius_;
		cout << "\nArea: " << getArea();
		cout << "\nCirumfrence: " << getPerimeter() << endl;
	}
}