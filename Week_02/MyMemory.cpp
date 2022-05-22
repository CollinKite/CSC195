//#include "Employee.h"
//#include <iostream>
//
//using namespace std;
//
//void something() {
//	Employee bob; // Stack Memory
//	cout << &bob;
//
//	Employee* employeePtr; //Pointer
//	employeePtr = new Employee(); //Heap Memory allocate memory for the size of employee
//	employeePtr->age = 42;
//	
//	std::cout << &employeePtr;
//	std::cout << employeePtr;
//	std::cout << *employeePtr -> age;
//
//
//	delete employeePtr; //We say that memory location and size is avalible, but it isn't nullified and previous values are still stored - this is why we use nulls in constructors to clear the memory
//}