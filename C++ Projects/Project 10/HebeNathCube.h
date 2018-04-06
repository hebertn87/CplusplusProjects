//Nathan Hebert 3/8/16
//This is the class file for the cube class
#ifndef HEBENATHCUBE_H
#define HEBENATHCUBE_H
#include <iostream>
#include "HebeNathSquare.h"
using namespace std;

//Namespace
namespace Hebert
{
	//Cube is derived from public square
	class Cube:public Square
	{
		friend ostream & operator<<(ostream & out, const Cube & right); //Output operator

	public:
		//Member functions
		Cube(double side = 0, Point lowerleft = 0);
		double getArea() const;
		double getVolume() const;
	};
}
#endif