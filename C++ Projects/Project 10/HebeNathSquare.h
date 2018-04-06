//Nathan Hebert 3/8/16
//This is the Square class header file
#ifndef HEBENATHSQUARE_H
#define HEBENATHSQUARE_H
#include <iostream>
#include "HebeNathPoint.h"
using namespace std;

//Namespace
namespace Hebert
{
	//Class for square
	class Square
	{
		friend ostream & operator<<(ostream & out, const Square & right); //Output operator

	public:
		//Member functions
		Square(double side = 0, Point lowerleft = 0);
		void setSide(double);
		void setlowerleft(Point);
		Point getlowerleft() const;
		double getSide() const;

	private:
		//Data members
		Point lowerleft_;
		double side_;
	};
}
#endif