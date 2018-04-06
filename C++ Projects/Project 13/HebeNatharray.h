//Nathan Hebert
//4/5/16
//This is the header file for the Array class, and contains a class template and member function templates
#ifndef HEBENATHARRAY_H
#define HEBENATHARRAY_H
#include <iostream>
using namespace std;

//Namespace Hebert
namespace Hebert
{
	//Template for class Array
	template <class T>
	class Array
	{

	//These are the public member functions
	public:
		Array(); //Default Constructor
		Array(int);
		void addElement(T);
		void removeElement();
		void displayArray();
		T & operator[](const int &);
		~Array();

	//Private data members
	private:
		T * aptr_;
		int arraySize_;
	};

	//This is the default constructor
	template <class T>
	Array<T>::Array()
	{
		aptr_ = 0;
		arraySize_ = 0;
	}

	//This is the explicit constructor
	template <class T>
	Array<T>::Array(int size)
	{
		arraySize_ = size;
		aptr_ = new T[arraySize_];
	}

	//This is the destructor template
	template <class T>
	Array<T>::~Array()
	{
		delete[] aptr_;
	}

	//This function template adds an element
	template <class T>
	void Array<T>::addElement(T newitem)
	{
		//New temporary pointer
		T * tempptr;

		//Creates new size for new array
		int newsize = arraySize_ + 1;

		//Dynamically allocates the memory of newsize
		tempptr = new T[newsize];

		//Copies old info into new array
		for (int i = 0; i < arraySize_; i++)
		{
			tempptr[i] = aptr_[i];
		}

		//Puts the new info in the last element
		tempptr[newsize - 1] = newitem;

		//Delets the dynamically allocated space
		delete[] aptr_;
		aptr_ = tempptr;

		//passes new size back to arraySize
		arraySize_ = newsize;
	}

	//This function template removes an element
	template <class T>
	void Array<T>::removeElement()
	{
		//New temporary pointer
		T * tempptr;

		//Creates new size for new array
		int newsize = arraySize_ - 1;

		//Dynamically allocates the memory of newsize
		tempptr = new T[newsize];

		//Copies old info into new array
		for (int i = 0; i < newsize; i++)
		{
			tempptr[i] = aptr_[i];
		}

		//Delets the dynamically allocated space
		delete[] aptr_;
		aptr_ = tempptr;

		//passes new size back to arraySize
		arraySize_ = newsize;
	}

	//Displays the array
	template <class T>
	void Array<T>::displayArray()
	{
		for (int i = 0; i < arraySize_; i++)
		{
			cout << aptr_[i] << endl;
		}
	}

	//This is the subscript operator overload
	template <class T>
	T & Array<T>::operator[](const int &index)
	{
		return aptr_[index];
	}
}
#endif