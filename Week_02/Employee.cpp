#include "Employee.h"
#include "string.h"
#include <iostream>

using namespace std;
//Constructors
Employee::Employee() {
	memset(this->name/*name memory location*/, '\0' /*fill it with null*/, sizeof(this->name) /*the size of the var in memory*/); 
	// escape 0 ('\0') is NULL //Strings are always null terminated
}
Employee::~Employee() { //is called when a delete() is called
    //Clean up
}
// Setting Name
void Employee::Read() {
	//put read code here - Cin stuff
	cout << "\nEnter Name ";
	cin >> this->name; 

    cout << "\nEnter Last Name Initial: ";
    cin >> this->initial;

    cout << "\nEnter Your Age: ";
    cin >> this->age;

    if (age >= 18) {
        this->isAdult = true;
    }
    else
    {
        this->isAdult = false;
    }

    cout << "\nPlease Enter Your Zip Code: ";
    cin >> this->zipCode;

    cout << "\nPlease Enter Your Wage: ";
    cin >> this->wage;

    cout << "\nPlease Enter Your days Worked: ";
    cin >> this->daysWorked;

    if (daysWorked > maxDays) {
        this->daysWorked = this->maxDays;
    }

    for (int i = 0; i < daysWorked; i++) {
        cout << "\nenter hours worked for day" << i + 1 << ": ";
        cin >> this->hoursWorkedPerDay[i];
        this->totalHours += this->hoursWorkedPerDay[i];
    }

    this->grossIncome = this->totalHours * this->wage;
    this->netIncome = this->grossIncome - (this->grossIncome * this->tax);

    
}

void Employee::Write() {
    cout << endl << this->name << " Worked " << this->totalHours << " hours" << " at $" << this->wage << " an hour." << endl << "gross income: $" << this->grossIncome << endl << "net income: $" << this->netIncome;
}
