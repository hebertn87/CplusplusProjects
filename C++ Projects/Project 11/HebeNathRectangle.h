//Nathan Hebert
//3/15/16
//This header file is for the rectangle class
#ifndef HEBENATHRECTANGLE_H
#define HEBENATHRECTANGLE_H
#include "HebeNathShape.h"

//Namespace Hebert
namespace Hebert
{
	//Class rectangle is derived from shape
	class Rectangle:public Shape
	{
	public:

		Rectangle(double = 0, double = 0); //Constructor

		//Set and get member functions
		void setLength(double);
		void setWidth(double);
		double getLength() const;
		double getWidth() const;

		//Virtual member functions
		virtual double getArea() const;
		virtual double getPerimeter() const;
		virtual void print() const;

	private:
		//Data Members
		double length_;
		double width_;
	};
}
#endif