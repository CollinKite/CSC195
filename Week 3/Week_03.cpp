#include <iostream>
#include "MyDerived.h"
#include "MyConfig.h"

int main() {
	MyDerived der = MyDerived(); //Stack
	MyDerived* derPtr = new MyDerived(); //Heap - if there is a "new" it goes to the heap
	std::cout << der.AddSomething(3); //We call the child instance which adds 1 to the parent and the parent adds 1 as well, and 5 is returned - We use the "." to call the method from the stack
	std::cout << derPtr->AddSomething(3); //We use the -> to call the method on the heap.

	Config myconf;
	myconf.something = 3;
}