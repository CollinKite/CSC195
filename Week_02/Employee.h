#pragma once
class Employee
{
//Varibles
public:
	const float TAX = 0.1f;
	char name[33]; //we want it to be 32 long be we add 1 and do 33 because strings/chars are null terminated to show we're done

    const unsigned short maxDays = 7;
    const float tax = 0.1f;
    char initial = '\0';
    short age = 0;
    bool isAdult = false;
    int zipCode = 0;
    float wage = 0.00f;
    unsigned short daysWorked = 0;
    unsigned short int hoursWorkedPerDay[7]{};
    unsigned short int totalHours = 0;
    float grossIncome = 0.00f;
    float netIncome = 0.00f;
protected:

private:


//Methods
public:
	Employee(); //Constructor
    ~Employee(); //De-Structor
	//Employee(int somwthing);
	void Read();
	void Write();
	//int MyMethods(int x, int y);

protected:

private:

};

