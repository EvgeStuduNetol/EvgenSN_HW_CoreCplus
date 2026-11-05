//HomeWork C++ #9.3

#include <iostream>
#include <windows.h>


void print(int* arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int* a, int* b) 
{
    int vrem = *a;
    *a = *b;
    *b = vrem;
}

void reverse(int* arr, int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        swap(&arr[i], &arr[size - 1 - i]);
    }
}

int main() 
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = 9;

    std::cout << "До функции reverse: ";
    print(arr, size);

    reverse(arr, size);

    std::cout << "После функции reverse: ";
    print(arr, size);

    return 0;
}