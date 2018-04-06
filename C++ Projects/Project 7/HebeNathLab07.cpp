//Nathan Hebert 2/16/16
//This program allows a user to enter a file name, last then first name, age, and gpa. 
#include <iostream>
#include <fstream>
using namespace std;

//Structure for Student
struct Student
{
	char lastname[20];
	char firstname[15];
	int age;
	double gpa;
};

//Function Declaration/Prototype
void displayList(fstream &);
void displayEntry(fstream &);
void addEntry(fstream &);
void editEntry(fstream &);

//This is the main driver function
int main()
{
	//Variables
	fstream file;
	char filename[80];
	int choice;

	//Welcome message
	cout << "Welcome. This program will allow you to access a database of student information"
		<< "Please enter a file name: ";
	
	//Gets the file name
	cin.getline(filename, 80);

	//opens the file if there is one present, if not, it creates one, and then opens it for both input and output
	file.open(filename, ios::in);
	if (!file)
	{ 
		file.open(filename, ios::out);
	}

	file.close();
	file.open(filename, ios::in | ios::out | ios::binary);


	//Do while, switch statement that contains the menu
	do
	{
		cout << "Please enter a choice:\n"
			<< "1. Display Summary List of Entries\n2. Display an Entry\n3. Add an Entry\n4. Edit an Entry\n5. Quit\nChoice: ";

		cin >> choice;


		switch (choice)
		{
		case 1:
			displayList(file);
			break;
		case 2:
			displayEntry(file);
			break;
		case 3:
			addEntry(file);
			break;
		case 4:
			editEntry(file);
			break;
		case 5:
			break;
		}
	} while (choice != 5);

	file.close();
	return 0;
}

//This function will display a numbered list of names
void displayList(fstream &file)
{
	//Variables
	Student student;
	int count = 1;
	
	//Clears the file stream
	file.clear();
	file.seekg(0, ios::beg);

	//Do while, which both reads thefile and counts by number the on the list
	do
	{
		file.read(reinterpret_cast<char*>(&student), sizeof(student));
		
		if (file.eof())
			break;

		cout << count << ". " << student.lastname << endl;
		count++;
	}while (!file.eof());

}

//This fucntions diplsays the record of what was given based on the number of entry
void displayEntry(fstream &file)
{
	Student display;
	int choice;
	
	//Has the user input a number from displayList
	cout << "Who's record would you like to see? (Pick a number from the list of last names.)";
	cin >> choice;
	choice--; //Decrements the choice, to onset it
	choice *= sizeof(display);
	
	//Clears stream, puts it back to beginning, and reds size
	file.clear();
	file.seekg(choice, ios::beg);
	file.read(reinterpret_cast<char*>(&display), sizeof(display));

	//Outputs information in the output varable
	cout << "Last Name:" << display.lastname << endl;
	cout << "First Name: " << display.firstname << endl;
	cout << "Age: " << display.age << endl;
	cout << "GPA: " << display.gpa << endl;

}

//This function allows you to add an entry
void addEntry(fstream &file)
{
	//Object variable
	Student student;

	//Has the user write the information into the object variable
	cout << "\nPlease enter a Last name: ";
	cin.ignore();
	cin.getline(student.lastname, 20);

	cout << "\nPlease enter a first name: ";
	cin.getline(student.firstname, 15);

	cout << "\nPlease enter an age: ";
	cin >> student.age;

	cout << "\nPlease enter a GPA: ";
	cin >> student.gpa;

	//Sets file to beginning and writes the info
	file.seekp(0, ios::end);
	file.write(reinterpret_cast<char*>(&student), sizeof(student));

}

//This function allows you to edit the file.
void editEntry(fstream &file)
{
	//Variables and object varable
	int answer;  
	Student display;
	
	//Clears, and sets the file to beginning
	file.clear(); 
	file.seekg(0, ios::beg); 
	file.read(reinterpret_cast<char*>(&display), sizeof(display)); 

	//Asks user to enter a number of the thing they want to edit
	cout << "Please enter a number for the info you would like to edit: " << endl;
	cout << "1. Last Name \n2. First Name \n3. Age \n4. GPA: \n";
	cin >> answer; 
	cin.clear(); 

	//Input for the new data. Switch statement will pick on structure data member to use
	cout << "Please enter the new information. " << endl;
	cin.ignore();
	switch (answer) 
	{
	case 1:
		cin.getline(display.lastname, 20);
		break;
	case 2:
		cin.getline(display.firstname, 15);
		break;
	case 3:
		cin >> display.age;
		break;
	case 4:
		cin >> display.gpa;
		break;
	default:
		cout << "Error. Please try again ";
	}

	//Writes new value to file
	file.write(reinterpret_cast<char*>(&display), sizeof(display));
}