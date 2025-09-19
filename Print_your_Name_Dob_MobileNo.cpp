// Print_your_Name_Dob_MobileNo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    char Name[50];           // String for full name
    char DOB[15];            // String to hold date in format like DD/MM/YYYY
    char Mobile[15];         // String to hold mobile number (safer as a string)

    printf("Name: ");
    scanf_s("%49s", Name, sizeof(Name));  // Safe string input

    printf("DOB (DD/MM/YYYY): ");
    scanf_s("%14s", DOB, sizeof(DOB));

    printf("Mobile Number: ");
    scanf_s("%14s", Mobile, sizeof(Mobile));

    // Output what was entered
    printf("\nEntered Information:\n");
    printf("Name: %s\n", Name);
    printf("DOB: %s\n", DOB);
    printf("Mobile Number: %s\n", Mobile);

    return 0;
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
