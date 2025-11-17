// Name: Alex Jacobs, David Nguyen, Gabriel Lira, Jessy Zuniga, Cristine Llano, and Jorge Gonzalez
// Date: 11-12-2025
// Description: Chapter 9 Assignments
#include <iostream>
#include "input.h"
using namespace std;

int main()
{
	do
	{
		system("cls");

		cout << "\n\tCMPR131 Chapter 11: Heaps by Alex Jacobs, David Nguyen, Gabriel Lira, Jessy Zuniga, Cristine Llano, and Jorge Gonzalez";
		cout << "\n\t" << string(100, char(205));
		cout << "\n\t\t1> Heap using vector";
		cout << "\n\t\t2> Union and intersect of heaps";
		cout << "\n\t\t3> Heap in C++ STL";
		cout << "\n\t" << string(100, char(196));
		cout << "\n\t\t0. Exit";
		cout << "\n\t" << string(100, char(205));

		int option = inputInteger("\n\t\tOption: ", 0, 3);

		switch (option)
		{
		case 1:
	
			break;

		case 2:
		
			break;

		case 3:
			break;

		case 0:
			return 0;
		}

	} while (true);

}
