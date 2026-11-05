//HomeWork C++ #9.1

#include <iostream>

void print(int* arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr2[] = { 6, 5, 4, 8 };
    int arr3[] = { 1, 4, 3, 7, 5 };
    int arr4[] = { 9, 5 , 8, 4, 6, 2 };

    print(arr1, 9);
    print(arr2, 4);
    print(arr3, 5);
    print(arr4, 6);

    return 0;
}