#include "MyDerived.h"

int MyDerived::AddSomething(int initVal){
	return MyBase::AddSomething(initVal) + 1; //Calls the return from the parent class into this child and adds 1 again to child.
}