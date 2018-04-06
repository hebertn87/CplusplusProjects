//Nathan Hebert
//3/22/16
//This is the exceptions header file
#ifndef HEBENATHEXCEPTIONS_H
#define HEBENATHEXCEPTIONS_H
#include <exception>
using namespace std;

//Namepsace
namespace Hebert
{	
	//Overflow Exception Class
	class OverflowException :public exception
	{
	public:
		OverflowException(char * statement) : exception(statement)
		{}
	};
	
	//Subscript Exception Class
	class SubscriptException : public exception
	{
	public:
		SubscriptException(char * statement) : exception(statement)
		{}
	};

	//Memorty Exception Class
	class MemoryException : public exception
	{
	public:
		MemoryException(char * statement) : exception(statement)
		{}
	};
}

#endif