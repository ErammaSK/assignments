// area_of_circle1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include<math.h> // M_PI value constant 3.14159

int main()
{
    float radious, area;

    printf("Enter the radious of the circle: ");
    scanf_s("%f", &radious);

    area = 3.14159 * radious * radious;

    printf("Enter the area of circle %2.f\n", area);

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
