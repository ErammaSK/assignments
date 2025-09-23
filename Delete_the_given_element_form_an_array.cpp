// Delete_the_given_element_form_an_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
void del(int arr[], int* n, int key)
{
    int i = 0;
    while (arr[i] != key)i++;
   
    for (int j = i; j < *n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    //decrease the size
    (*n)--;

}

int main()
{
    int arr[] = { 10,20,30,50,60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 50;
    //deleate array element
    del(arr, &n, key);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
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
