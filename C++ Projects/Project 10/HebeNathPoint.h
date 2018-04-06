//Nathan Hebert 3/8/16
//This is the class file for the point class
#ifndef HEBENATHPOINT_H
#define HEBENATHPOINT_H
#include <iostream>
using namespace std;

//Namespace
namespace Hebert
{
	class Point
	{
		friend ostream & operator<<(ostream & out, Point & right); //Output operator

	public:
		//Member functions
		Point(double x = 0, double y = 0);
		void setX(double);
		void setY(double);
		double getX() const;
		double getY() const;
		
	private:
		//Date members
		double x_;
		double y_;
	};
}
#endif