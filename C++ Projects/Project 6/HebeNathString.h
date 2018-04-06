//Nathan Hebert
//2/9/16
//This file is the class file, or header file
#ifndef HEBENATHSTRING_H
#define HEBENATHSTRING_H

//This is namespace Hebert
namespace Hebert
{
	//This is the class string
	class String
	{
	//Public data members
	public:
		String();
		String(char []);
		~String();
		void setString(char []);
		void printString();
		int returnSize();

	//Public data members
	private:
		char *stringptr_;
	};
}
#endif