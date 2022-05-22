#include <iostream>
using namespace std;

void Square(int& i) {
	i = i * i;
}

void Double(int* ptr) {
	*ptr = *ptr * 2;
}

struct Person
{
	char name[32];
	int id;
};

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int someNum = 7;
	// declare a int reference and set it to the int variable above
	int& num = someNum;
	// output the int variable
	cout << "\n" << someNum << " Value Referenced";
	cout << "\n" << num << " Reference";
	// set the int reference to some number
	num = 4;
	// output the int variable
	cout << "\nupdated reference to 4";
	cout << "\n" << someNum << " Value Referenced";
	cout << "\n" << num << " Reference";
	// what happened to the int variable when the reference was changed? (insert answer)

	//- Both Values were updated to the new value

	// output the address of the int variable
	// output the address of the int reference
	cout << "\n Address of Initial Value: " << &someNum;
	cout << "\n Address of Reference Value: " << &num;
	// are the addresses the same or different? (insert answer)
	// 
	// - They both share the same address - the reference is just another alias for the variable
	// 
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section

	// output the int variable to the console
	Square(someNum);
	cout << "\n Squared the number!";
	cout << "\n" << someNum;
	cout << "\n" << num;
	

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section
	int* Ptr = nullptr;
	Ptr = &someNum;

	// output the value of the pointer
	cout << "\n Value Of Ptr: " << Ptr;
	// what is this address that the pointer is pointing to? (insert answer)
	// 
	// -Same address as the Initial var and the reference
	

	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "\n Dereferenced Value of Ptr: " << *Ptr;
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(Ptr);
	// output the dereference 
	 cout << "\n Pointer Value after Double: " << * Ptr;
	 
	// output the int variable created in the REFERENCE section
	 cout << "\n Reference Value after Double: " << someNum;
	// did the int variable's value change when using the pointer?
	// 
	 //-yes
	 // 
	 // 
	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	 int* intPtr = new int;
	 *intPtr = 7;
	// output the pointer value, this should be the address of the int allocated on the heap
	 cout << "\n Pointer refrencing Heap Value: " << intPtr;
	 
	 
	// output the dereference pointer
	 cout << "\n Pointer De-refrencing Heap Value: " << *intPtr;
	// deallocate the int pointer to free up the memory
	 delete intPtr;

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	 int arraySize = 6;
	 int* intArrPtr = new int[arraySize];
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	 for (int i = 0; i < arraySize; i++)
	 {
		 intArrPtr[i] = rand() % 10;
	 }
	// use a for loop and output each of the ints in the array
	 for (int i = 0; i < arraySize; i++)
	 {
		 cout << "\n Value at index " << i << ": " << intArrPtr[i];
	 }
	// use a for loop and output the address of each of the ints in the array
	 for (int i = 0; i < arraySize; i++)
	 {
		 cout << "\n Address at index " << i << ": " << &intArrPtr[i];
	 }
	// deallocate the int pointer to free up the memory block (remember it's an array)
	 delete[] intArrPtr;

	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	 Person* personPtr = new Person[2];
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	 for (int i = 0; i < 2; i++)
	 {
		 cout << "\nPlease Enter a Name:\n";
		 cin >> personPtr[i].name;
		 cout << "\nPlease Enter a ID:\n";
		 cin >> personPtr[i].id;
	 }


	// use a for loop and output the name and id of each person in the array 
	for (int i = 0; i < 2; i++)
	 {
		 cout <<"\n Person at index " << i << " has an name of " << personPtr[i].name;
		 cout << "\n Person at index " << i << " has an id of " << personPtr[i].id;
	 }
	// deallocate the person pointer to free up the memory block (remember it's an array)
	delete[] personPtr;
}