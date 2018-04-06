//Nathan Hebert
//3/15/16
//This is the Circle Class
#ifndef HEBENATHCIRCLE_H
#define HEBENATHCIRCLE_H
#include "HebeNathShape.h"

//Namepsace Hebert
namespace Hebert
{
	//Circle class is derived from shape
	class Circle:public Shape
	{
	public:
		Circle(double = 0); //Constructor

		//Virtual classes
		virtual double getArea() const;
		virtual double getPerimeter() const;
		virtual void print() const;

		//set and get member functions
		void setRadius(double);
		double getRadius() const;

	private:
		//Data members
		double radius_;
		const double PI_ = 3.14592654;
	};
}
#endif