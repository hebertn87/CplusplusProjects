//Nathan Hebert
//3/15/16
//This header file is the square class file
#ifndef HEBENATHSQUARE_H
#define HEBENATHSQUARE_H
#include "HebeNathRectangle.h"
#include "HebeNathShape.h"

//Namespace hebert
namespace Hebert
{
	//Square is derived from rectangle
	class Square : public Rectangle
	{
	public:
		Square(double = 0); //Constructor

		//Set and get member functions
		void setSide(double);
		double getSide() const;

		//virtual member functions
		virtual double getArea() const;
		virtual double getPerimeter() const;
		virtual void print() const;

	private:
		//Data member
		double side_;
	};
}
#endif