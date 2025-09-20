// Calculate_average_wight_for_purchase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.

#include <stdio.h>

int main() {
    float weight1, weight2;
    float qty1, qty2;
    float averageValue;

    // Input for Item 1
    printf("Weight - Item1: ");
    scanf_s("%f", &weight1);
    printf("No. of item1: ");
    scanf_s("%f", &qty1);

    // Input for Item 2
    printf("Weight - Item2: ");
    scanf_s("%f", &weight2);
    printf("No. of item2: ");
    scanf_s("%f", &qty2);

    // Calculate average value
    averageValue = ((weight1 * qty1) + (weight2 * qty2)) / (qty1 + qty2);

    // Output
    printf("Average Value = %f\n", averageValue);

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
