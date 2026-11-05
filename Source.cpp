//HomeWork C++ #10.2

#include <iostream>
#include <windows.h>

    
    double* create_array(int size) 
    {
        double* arr = new double[size]();
        return arr;
    }

    int main() 
    {
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);


        int size;

        std::cout << "Введите размер массива: ";
        std::cin >> size;

        double* arr = create_array(size);

        std::cout << "Массив: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        delete[] arr;

        return 0;
    }

  

