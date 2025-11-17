// Name: Alex Jacobs, David Nguyen, Gabriel Lira, Jessy Zuniga, Cristine Llano, and Jorge Gonzalez
// Date: 11-17-2025
// Description: Chapter 11 Assignments

#include <iostream>
#include "input.h"
#include "MaxHeap.h"
#include "MinHeap.h"
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
            // TODO: Add Tree of strings
            break;

        case 2:
        {
            bool back = false;
            while (!back)
            {
                system("cls");

                cout << "\n\t2> Union and intersect heap";
                cout << "\n\t" << string(100, char(205));
                cout << "\n\tA> Union two max Heaps";
                cout << "\n\tB> Intersect two max Heaps";
                cout << "\n\tC> Union two min Heaps";
                cout << "\n\tD> Intersect two min Heaps";
                cout << "\n\t" << string(100, char(196));
                cout << "\n\t0> Return";
                cout << "\n\t" << string(100, char(205));

                char choice = inputChar("\n\t\tOption: ", string("ABCD0"));
                choice = toupper(choice);

                if (choice == '0')
                {
                    back = true;
                    break;
                }

                // Predefined heaps
                MaxHeap<int> max1, max2;
                max1.push(12); max1.push(5); max1.push(6); max1.push(2);
                max2.push(12); max2.push(9); max2.push(6);

                MinHeap<int> min1, min2;
                min1.push(2); min1.push(5); min1.push(6); min1.push(12);
                min2.push(6); min2.push(12); min2.push(9);

                switch (choice)
                {
                case 'A':
                {
                    MaxHeap<int> result = unionMaxHeap(max1, max2);
                    cout << "\n\n\tMax heap1: " << max1;
                    cout << "\n\tMax heap2: " << max2;
                    cout << "\n\n\tMerged max heap: " << result << "\n";
                    system("pause");
                }
                break;

                case 'B':
                {
                    MaxHeap<int> result = intersectMaxHeap(max1, max2);
                    cout << "\n\n\tMax heap1: " << max1;
                    cout << "\n\tMax heap2: " << max2;
                    cout << "\n\n\tIntersect max heap: " << result << "\n";
                    system("pause");
                }
                break;

                case 'C':
                {
                    MinHeap<int> result = unionMinHeap(min1, min2);
                    cout << "\n\n\tMin heap1: " << min1;
                    cout << "\n\tMin heap2: " << min2;
                    cout << "\n\n\tMerged min heap: " << result << "\n";
                    system("pause");
                }
                break;

                case 'D':
                {
                    MinHeap<int> result = intersectMinHeap(min1, min2);
                    cout << "\n\n\tMin heap1: " << min1;
                    cout << "\n\tMin heap2: " << min2;
                    cout << "\n\n\tIntersect min heap: " << result << "\n";
                    system("pause");
                }
                break;
                }
            }
        }
        break;

        case 3:
            // TODO: STL heap example
            break;

        case 0:
            return 0;
        }

    } while (true);

    return 0;
}
