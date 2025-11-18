// Name: Alex Jacobs, David Nguyen, Gabriel Lira, Jessy Zuniga, Cristine Llano, and Jorge Gonzalez
// Date: 11-17-2025
// Description: Chapter 11 Assignments

#include <iostream>
#include "input.h"
#include "MaxHeap.h"
#include "MinHeap.h"

using namespace std;

void option1();
void option2();

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
            option1();
            break;

        case 2:
        {
            option2();
            break;
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

void option1_min()
{
    MinHeap<int> heap;

    do {
        system("cls");
        cout << "\n\tA> Min Heap";
        cout << "\n\t" << string(100, char(205));
        cout << "\n\t\t1> Size";
        cout << "\n\t\t2> empty";
        cout << "\n\t\t3> push";
        cout << "\n\t\t4> front";
        cout << "\n\t\t5> pop";
        cout << "\n\t\t6> display";
        cout << "\n\t" << string(100, char(196));
        cout << "\n\t\t0. Exit";
        cout << "\n\t" << string(100, char(205));
        
        switch (inputInteger("\n\tOption: ",0,6)) 
        {
        case 1:
            cout << "\n\tSize: " << heap.size() << "\n";
            break;
        case 2:
            cout << "\n\t" << (heap.empty() ? "Heap is empty" : "Heap is not empty") << "\n";
            break;
        case 3: {
            int val = inputInteger("\n\tEnter integer to push: ");
            
            heap.push(val);
            cout << "\n\tPushed " << val << "\n";
            break;
        }
        case 4:
            if (!heap.empty()) {
                cout << "\n\tFront: " << heap.front() << "\n";
            }
            else {
                cout << "\n\tHeap is empty" << "\n";
            }
            break;
        case 5:
            if (!heap.empty()) {
                cout << "\n\tPopped front element" << "\n";
                heap.pop();
            }
            else {
                cout << "\n\tHeap is empty" << "\n";
            }
            break;
        case 6:
            cout << "\n\tHeap contents: " << heap << "\n";
            break;

        case 0:
            cout << "\n\tExiting..." << "\n";
            return;
            break;
        default:
            cout << "\n\tInvalid choice" << "\n";
        }

        cout << "\n\n\n\t";
        system("pause");

    } while (true);
    return;
}

void option1_max()
{
    MaxHeap<int> heap;

    do {
        system("cls");
        cout << "\n\tA> Max Heap";
        cout << "\n\t" << string(100, char(205));
        cout << "\n\t\t1> Size";
        cout << "\n\t\t2> empty";
        cout << "\n\t\t3> push";
        cout << "\n\t\t4> front";
        cout << "\n\t\t5> pop";
        cout << "\n\t\t6> display";
        cout << "\n\t" << string(100, char(196));
        cout << "\n\t\t0. Exit";
        cout << "\n\t" << string(100, char(205));

        switch (inputInteger("\n\tOption: ", 0, 6))
        {
        case 1:
            cout << "\n\tSize: " << heap.size() << "\n";
            break;
        case 2:
            cout << "\n\t" << (heap.empty() ? "Heap is empty" : "Heap is not empty") << "\n";
            break;
        case 3: {
            int val = inputInteger("\n\tEnter integer to push: ");

            heap.push(val);
            cout << "\n\tPushed " << val << "\n";
            break;
        }
        case 4:
            if (!heap.empty()) {
                cout << "\n\tFront: " << heap.front() << "\n";
            }
            else {
                cout << "\n\tHeap is empty" << "\n";
            }
            break;
        case 5:
            if (!heap.empty()) {
                cout << "\n\tPopped front element" << "\n";
                heap.pop();
            }
            else {
                cout << "\n\tHeap is empty" << "\n";
            }
            break;
        case 6:
            cout << "\n\tHeap contents: " << heap << "\n";
            break;

        case 0:
            cout << "\n\tExiting..." << "\n";
            return;
            break;
        default:
            cout << "\n\tInvalid choice" << "\n";
        }

        cout << "\n\n\n\t";
        system("pause");

    } while (true);
    return;
}

void option1()
{
    do {
        system("cls");
        cout << "\n\t1> Heap using vector";
        cout << "\n\t" << string(100, char(205));
        cout << "\n\t\tA> Min heap";
        cout << "\n\t\tB> Max heap";
        cout << "\n\t" << string(100, char(196));
        cout << "\n\t\t0. Exit";
        cout << "\n\t" << string(100, char(205));

        switch (toupper(inputChar("\n\tOption: ", string("abAB0"))))
        {
        case 'A':
            option1_min();
            break;
        case 'B':
            option1_max();
            break;
        case '0':
            cout << "\n\tReturning to main menu" << "\n";
            return;
            break;
        default:
            cout << "\n\tInvalid choice" << "\n";
        }

        cout << "\n\n\n\t";
        system("pause");

    } while (true);
    return;
}

void option2()
{
    
    do 
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


        // Predefined heaps
        MaxHeap<int> max1, max2;
        max1.push(12); max1.push(5); max1.push(6); max1.push(2);
        max2.push(12); max2.push(9); max2.push(6);

        MinHeap<int> min1, min2;
        min1.push(2); min1.push(5); min1.push(6); min1.push(12);
        min2.push(6); min2.push(12); min2.push(9);

        switch (toupper(inputChar("\n\t\tOption: ", string("ABCD0"))))
        {
        case 'A':
        {
            MaxHeap<int> result = unionMaxHeap(max1, max2);
            cout << "\n\n\tMax heap1: " << max1;
            cout << "\n\tMax heap2: " << max2;
            cout << "\n\n\tMerged max heap: " << result << "\n";
            break;
        }
        

        case 'B':
        {
            MaxHeap<int> result = intersectMaxHeap(max1, max2);
            cout << "\n\n\tMax heap1: " << max1;
            cout << "\n\tMax heap2: " << max2;
            cout << "\n\n\tIntersect max heap: " << result << "\n";
            break;
        }
        

        case 'C':
        {
            MinHeap<int> result = unionMinHeap(min1, min2);
            cout << "\n\n\tMin heap1: " << min1;
            cout << "\n\tMin heap2: " << min2;
            cout << "\n\n\tMerged min heap: " << result << "\n";
            break;
        }
        

        case 'D':
        {
            MinHeap<int> result = intersectMinHeap(min1, min2);
            cout << "\n\n\tMin heap1: " << min1;
            cout << "\n\tMin heap2: " << min2;
            cout << "\n\n\tIntersect min heap: " << result << "\n";
            break;
        }
        

        case '0':
            cout << "\n\tBack to main menu!";
            return;
            break;
        }

        cout << "\n\n";

        system("pause");

    } while (true);

    return;
}
