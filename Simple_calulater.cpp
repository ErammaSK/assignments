// Simple_calulater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <float.h>

int main()
{
    char op; 
    double a, b, res;

    //input of operater
    printf("Enter operater(+,-,*,/): ");
    scanf_s("%c", &op);

    //two number
    printf("Enter two number: ");
    scanf_s("%lf %lf", &a, &b);


    switch(op)
    {
    case '+':
            res = a + b;
            break;
    case '-':
            res = a - b;
            break;
    case '*':
            res = a * b;
            break;
    case '/':
            res = a / b;
            break;
    default:
            printf("ERROR! not declare in operater");
            res = -DBL_MAX;
    }
    if (res != -DBL_MAX)
    {
        printf("%.2lf\n", res);
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
