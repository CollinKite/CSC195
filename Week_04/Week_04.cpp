// Week_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

//Param is a copy when passed by value
void AddByvalue(int param) 
{
    param = param + 1;
}

//Pointer Accesses direct memory location of value
void AddByPointer(int* intPtr)
{
    *intPtr = *intPtr + 1;
}

//By Reference Creates alias to the other variable
void addByReference(int& ref)
{
    ref = ref + 1;
}

using namespace std;

int main()
{
    Person people[5];
    Person* peoplePtr[5];

    peoplePtr[0] = &people[0];
    peoplePtr[1] = new Person();

    people[0].age = 15;
    people[0].isAlive = true;
    peoplePtr[1]->age = 42;
    peoplePtr[1]->isAlive = true;
    strncpy_s(peoplePtr[1]->name, "asdf", sizeof("asdf"));

    //strncpy_s(people[0].name, "bob", 3);
    //cout << "\n Size of name: " << sizeof(people[0].name);
    char charArray[] = { 'b', 'o', 'b', '\0' };
    //people[0].name = charArray;k
    cout << "\n name: " << peoplePtr[1]->name;
    



    //std::cout << "Hello World!\n";
    //int iVal = 5;
    //std::cout << "Initial value = " << iVal;

    //AddByvalue(iVal);
    //std::cout << "\n after AddByValue() iVal = " << iVal;

    //AddByPointer(&iVal);
    //std::cout << "\n after AddByPointer() iVal = " << iVal;

    //addByReference(iVal);
    //std::cout << "\n after AddByRef() iVal = " << iVal;

    //int& ref = iVal; //Creates alias of iVal, so changing ref, will change iVal. Points to the same Address as iVal
    //ref++;
    //std::cout << "\n after ++, ival = " << iVal;
    //// / / / / / // / / // / / / /

    //int* iPtr;
    //iPtr = new int;
    //*iPtr = 6;
    //std::cout << "\n Value of iPtr = " << *iPtr;

    //delete iPtr;
    ////Use Delete for heap, if you don't delete if would cause a memory leak/run out of memory.

    //void* ptr = malloc(10);
    //free(ptr);
    ////use free for malloc
    //std::cout << "\n End";
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
