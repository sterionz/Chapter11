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
void option3();

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
            option3();
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

void option3()
{
    vector<int> v;

    do
    {
        system("cls");

        cout << "\n\t\t3> Heap in C++ STL";
        cout << "\n\t\t" << string(79, char(205));
        cout << "\n\t\t\tA> create a dynamic array";
        cout << "\n\t\t\tB> push_back() an element";
        cout << "\n\t\t\tC> make_heap()";
        cout << "\n\t\t\tD> front()";
        cout << "\n\t\t\tE> push_heap()";
        cout << "\n\t\t\tF> pop_heap()";
        cout << "\n\t\t\tG> sort_heap()";
        cout << "\n\t\t\tH> is_heap()";
        cout << "\n\t\t\tI> is_heap_until()";
        cout << "\n\t\t\tJ> display";
        cout << "\n\t\t" << string(79, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" << string(79, char(205));

        char choice = toupper(inputChar("\n\t\t\tOption: ", "abcdefghij0"));

        switch (choice)
        {
        case 'A':
        {
            int size = inputInteger("\n\t\t\tEnter the size of the dynamic array: ");

            v.clear();
            v.reserve(size);

            srand(time(0));
            for (int i = 0; i < size; i++)
                v.push_back(rand() % 100);

            break;
        }

        case 'B':
        {
            int value = inputInteger("\n\t\t\tEnter an element: ", true);

            v.push_back(value);

            break;
        }

        case 'C':
        {
            make_heap(v.begin(), v.end());

            break;
        }

        case 'D':
        {
            if (!v.empty())
            {
                cout << "\n\t\t\tThe maximum element of heap: " << v.front() << "\n";
            }
            else
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }

            break;
        }
        case 'E':
        {
            if (!v.empty())
            {
                push_heap(v.begin(), v.end());
            }
            else
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }

            break;
        }
        case 'F':
        {
            if (!v.empty())
            {
                pop_heap(v.begin(), v.end());
                v.pop_back();
            }
            else
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }

            break;
        }
        case 'G':
        {
            sort_heap(v.begin(), v.end());

            break;
        }
        case 'H':
        {
            bool result = is_heap(v.begin(), v.end());

            if (result)
            {
                cout << "\n\t\t\tThe vector is a heap";
            }
            else
            {
                cout << "\n\t\t\tThe vector is not a heap";
            }

            break;
        }
        case 'I':
        {
            cout << "\n\t\t\tThe heap elements in the container are : ";

            for (int x : v)
                cout << x << " ";
            cout << "\n";

            break;
        }
        case 'J':
        {
            cout << "\n\t\t\t";
            for (int x : v)
                cout << x << " ";
            cout << "\n";

            break;
        }
        case 0:
        {
            return;
        }

        } 

        cout << "\n\nPress any key to continue . . .";
        cin.get();

    } while (true);
}
