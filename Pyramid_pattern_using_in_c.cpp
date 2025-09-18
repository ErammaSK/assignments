// Pyramid_pattern_using_in_c.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <stdio.h>

int main()
{
    int N = 5;

    // Outer Loop for number of rows
    for (int i = 1; i <= N; i++) {

        // inner Loop for space printing
        for (int j = 1; j <= N - i; j++)
            printf(" ");

        // inner Loop for star printing
        for (int j = 1; j < 2 * i; j++)
            printf("*");
        printf("\n");
    }
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
