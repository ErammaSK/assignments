// void pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int v1 = 10;
    float v2 = 32.33f;
    char v3 = 'A';
    double v4 = 32.43;

    int* p1 = &v1;
    float* p2 = &v2;
    char* p3 = &v3;
    double* p4 = &v4;

    //generic pointer
    void* ptr = p1;//ptr acts as a integer
    printf("value at p1 is: %d\n", *(int*)(ptr));

    ptr = p2;//ptr acts as a float pointer
    printf("value at p2 is: %f\n", *(float*)(ptr));

    ptr = p3;//ptr acts as a char pointer
    printf("value at p3 is %c\n", *(char*)(ptr));

    ptr = p4;//ptr acts as a double
    printf("value at p3 is: %lf\n", *(double*)(ptr));

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
