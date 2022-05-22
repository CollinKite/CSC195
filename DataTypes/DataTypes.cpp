// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const unsigned short maxDays = 7;
    const float tax = 0.1f;
    string name = "\0";
    char initial = '\0';
    short age = 0;
    bool isAdult = false;
    int zipCode = 0 ;
    float wage = 0.00f;
    unsigned short daysWorked = 0;
    unsigned short int hoursWorkedPerDay[7]{};
    unsigned short int totalHours = 0;
    float grossIncome = 0.00f;
    float netIncome = 0.00f;

     cout << "\nEnter your Name: ";
     cin >> name;
    
     cout << "\nEnter Last Name Initial: ";
     cin >> initial;

     cout << "\nEnter Your Age: ";
     cin >> age;

     if (age >= 18) {
         isAdult = true;
     }
     else
     {
         isAdult = false;
     }

     cout << "\nPlease Enter Your Zip Code: ";
     cin >> zipCode;

     cout << "\nPlease Enter Your Wage: ";
     cin >> wage;

     cout << "\nPlease Enter Your days Worked: ";
     cin >> daysWorked;

     if (daysWorked > maxDays) {
         daysWorked = maxDays;
     }

  

     for (int i = 0; i < daysWorked; i++) {
         cout << "\nenter hours worked for day" << i + 1 << ": ";
         cin >> hoursWorkedPerDay[i];
         totalHours += hoursWorkedPerDay[i];
     }

     grossIncome = totalHours * wage;
     netIncome = grossIncome - (grossIncome * tax);

     cout << endl << name << " Worked " << totalHours << " hours" << " at $" << wage << " an hour." << endl << "gross income: $" << grossIncome << endl << "net income: $" << netIncome;



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
