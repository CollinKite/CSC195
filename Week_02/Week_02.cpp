// Week_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Employee workers[5]; //Create array of employess

    int* intPtr = new int;
    *intPtr = 3;
    std::cout << intPtr;

    void* ptr = malloc(10); //void is an empty type and be reserve 10 bytes of memory

    int somevalue = 1;

    //for loop
    //call read for each object in the array;
    // 
    // 
    //for (int count = 0; count < sizeof(workers) / sizeof(Employee); count++)
    //{
    //    workers[count].Read();
    //}
    //// Write to screen
    //for (int count = 0; count < std::size(workers); count++) {
    //    workers[count].Write();
    //}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
