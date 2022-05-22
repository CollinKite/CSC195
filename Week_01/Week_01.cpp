// Week_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    std::cout << "Week_01 Hello World\n";

    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = -2;
    int shiz;
    for (int i = 0; i < 2; i++)
    {
        std::cout << "\n V1 = " << iVal1;
        std::cout << "\naddress of V1 = " << &iVal1;

        std::cout << "\n value of V2 = " << shVal2;
        std::cout << "\n address of V2 = " << &shVal2;

        std::cout << "\n value of V3 = " << iVal3;
        std::cout << "\n address of V3 = " << &iVal3;

        std::cout << "\nsizeof(V1) " << sizeof(iVal1);
        std::cout << "\nsizeof(V2) " << sizeof(shVal2);
        std::cout << "\nsizeof(V3) " << sizeof(iVal3);
        std::cin >> shiz;
    }


    //std::cout << "\n\n !!! diff V1 and V3 = " << (&iVal1 - &iVal3);

    int* ptr = NULL;
    ptr = &iVal1;
    std::cout << "\n\nValue of ptr = " << ptr; //prints Memory location of what ptr points too, in this case it's iVal1 memory location as referenced in line 31
    std::cout << "\nvalue ptr points to " << *(ptr - 6); //De-reference "*" - Get's value of memory location. Reference = memory location/address "&"
    //*ptr = 5;
    std::cout << "\n value of iVal1 = " << iVal1;
    //*(ptr + 11) = 12345; //Crash by writing random numbers to memory in the program



    

}
