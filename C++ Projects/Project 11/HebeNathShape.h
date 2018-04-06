//Nathan Hebert
//3/15/16
//Abstract shape class header file
#ifndef HEBENATHSHAPE_H
#define HEBENATHSHAPE_H

//namepsace Hebert
namespace Hebert
{	//Shape class
	class Shape
	{
	public:
		//Virtual pure functions
		virtual double getArea() const = 0;
		virtual double getPerimeter() const = 0;
		virtual void print() const = 0;
	};
}
#endif