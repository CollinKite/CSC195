// Week 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyInput.h"
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Database.h"

using namespace std;

int main()
{
    Database db;
    MyInput input;
    Animal* myAnimal = NULL;

    int iMenu = 0;
    int iType = 0;
    while (iMenu != 5) {
        
        cout << "\n1) Create";
        cout << "\n2) Display All";
        cout << "\n3) Display Name";
        cout << "\n4) Clear";
        cout << "\n5) Exit\n";

        iMenu = input.getUserInt("Enter menu option: ", 1, 5);
        

        switch (iMenu) {
        case 1:
            // Create Animal
            //int iType = 0;
            cout << "1) Mammal\n";
            cout << "2) Bird\n";
            iType = input.getUserInt("Enter 1 or 2: ", 1, 2);
            switch (iType) {
            case (int)Animal::eType::Mammal:
                myAnimal = new Mammal;
                break;
            case (int)Animal::eType::Bird:
                myAnimal = new Bird;
                break;
            }

            if (myAnimal != NULL) {

                cin >> *myAnimal;

                cout << *myAnimal;

                db.save(*myAnimal);
            }
            break;
        case 2:
            db.DisplayAll(cout);
            break;
        case 4:
            db.Empty();
            if (myAnimal != NULL) {
                delete myAnimal;
                myAnimal = NULL;
            }
            break;
        }
    }
}
