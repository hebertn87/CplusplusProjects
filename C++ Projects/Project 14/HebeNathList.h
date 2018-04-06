//Nathan Hebert
//04/12/16
#ifndef HEBENATHLIST_H
#define HEBENATHLIST_H
#include <iostream>
using namespace std;

//This is the class template
template <class T>
class LinkList
{
public:

	//Constructor and Destructor
	LinkList();
	~LinkList();

	//Member functions
	void append(T);
	void remove(T);
	void display() const;

private:

	//Structure for a list node
	struct Node
	{
		T item;
		Node * next;
	};

	Node * head; //Head ptr
};

//Constructor
template <class T>
LinkList<T>::LinkList()
{
	//Sets head to null
	head = nullptr;
}

//Append function template
template <class T>
void LinkList<T>::append(T newitem)
{
	//Struct node variables
	Node * newNode; 
	Node * nodeptr;

	//Creates a new node, stores the value in the node, and sets next to null
	newNode = new Node;
	newNode->item = newitem;
	newNode->next = nullptr;

	//If head is null, head points to new node
	if (!head)
	{
		head = newNode;
	}
	//If there is data in list, it will add to the end of the list
	else
	{
		nodeptr = head;
		//while nodeptr can go forward, it will move to the next one.
		while (nodeptr->next)
		{
			nodeptr = nodeptr->next;
		}

		nodeptr->next = newNode;
	}

}

//Remove function template
template <class T>
void LinkList<T>::remove(T newitem)
{
	//Note ptr variables
	Node *nodeptr;
	Node *previousnode = nullptr;
	bool bad = true;

	//If there is nothing in the list, it will return to the main function
	if (!head)
		return;
	
	//If it's head is pointing to the item it will remove it and head will point to the next one
	if (head->item == newitem)
	{
		nodeptr = head->next;
		delete head;
		head = nodeptr;
	}
	//If its not the first one it will find the item to remove
	else
	{
		nodeptr = head;

		//while nodeptr is in the list, it will find the item
		while (nodeptr != nullptr && nodeptr->item != newitem)
		{
			previousnode = nodeptr;
			nodeptr = nodeptr->next;
		}
		
		//If nodeptr is true it will like the previous node to the one after the one we are removing
		if (nodeptr)
		{
			previousnode->next = nodeptr->next;
			delete nodeptr;
			bad = false;
		}
	}
	//If the item was not found, it will display the error message.
	if (bad)
	{
		cout << "This item was not in the list, please look at the list's items and try again.\n";
	}
}

//Display template function
template <class T>
void LinkList<T>::display() const
{
	//Node struct variable
	Node * nodeptr;

	//sets nodeptr to head
	nodeptr = head;

	//While nodeptr is true, it will output then nodes items
	while (nodeptr)
	{
		cout << nodeptr->item << endl;
		nodeptr = nodeptr->next;
	}
}

//Destructor for head
template <class T>
LinkList<T>::~LinkList()
{
	delete head;
}
#endif
