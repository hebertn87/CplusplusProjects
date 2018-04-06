//Nathan Hebert
//4/19/16
//This program simulates a bank
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <queue>
using namespace std;

//Function declaration
void Service(int);

//This is the main driver program
int main()
{
	//Variables
	int endTime, serviceTime, total = 0;
	
	//Welcome message
	cout << "Welcome user, this program allows you to simulate a line at a bank.";
	
	//Input for time to simulate
	cout << "\nEnter an amount of time in minutes to simulate: ";
	cin >> endTime;

	//First customer
	cout << "\nThe first customer is being serviced.";
	
	//Function call
	Service(endTime);

	return 0;
}

void Service(int endTime)
{
	//Variables and queue
	queue<int> line;
	int serviceTime, arrive, dayTime = 0, max = 0, wait = 0, customerwait;

	//Initializes the times to when the first person leaves
	arrive = (dayTime + (rand() % 4 + 1));
	dayTime = arrive;
	serviceTime = (dayTime + (rand() % 4 + 1));

	//While there is still minutes left before closing time
	for (dayTime; dayTime <= endTime; dayTime++)
	{
		bool leftservice = false;

		//If the customers time is up, they leave
		if (dayTime == serviceTime)
		{
			serviceTime = (dayTime + (rand() % 4 + 1)); //New service time for the next customer

			cout << "\nIt's time for the current customer to leave."; 

			leftservice = true;
		}

		//Gives us a customer that arrives and puts them into the line
		if (arrive == dayTime)
		{
			cout << "\nAnother customer has arrived.";

			line.push(arrive); //Puts person in line, or enqueues

			arrive = (dayTime + (rand() % 4 + 1)); //Calculates next arrival time

			//calculates the max line size
			if (line.size() > max)
			max = line.size();
		}
		
		//If the line is empty, the customer will be serviced
		if (!line.empty())
		{
			if (leftservice)
			{
				cout << "\nA customer has is Now being serviced.";

				customerwait = line.front(); //Initializes the customer wait to the time of the first person in line

				line.pop(); //Dequeues
				
				//Calculates the wait time for customers
				if (wait < (dayTime - customerwait))
				{
					wait = (dayTime - customerwait);
				}
			}
		}	
	}

	//Output indicating the closing of the bank
	cout << "\n\nThe bank has now closed after " << endTime << " minutes and the last customers \nwill be serviced, if any.";

	//executes while the line is not empty
	for (bool empty = true; empty != line.empty(); dayTime++)
	{		
			//Determines if customer left service
			bool leftservice = false;

			//If the customers time is up, they leave
			if (dayTime == serviceTime)
			{
				cout << "\nIt is time for current customer to leave.";

				leftservice = true;

				serviceTime = (dayTime + (rand() % 4 + 1)); //New service time for next person
			}

			//If line isn't empty, it will pop and service people
			if (!line.empty())
			{
				if (leftservice)
				{
					cout << "\nA customer is now being serviced.";

					line.pop(); //Dequeues
				}
			}
	}

	//Outputs max customers and longest wait
	cout << "\n\nThere were a maximum number of " << max << " customers at one time.";
	cout << "\nThe longest wait for any one customer was: " << wait << " minutes." << endl;
 }
