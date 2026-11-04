//HomeWork C++ #3.2

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	double a, b, c;

	std::cout << "Enter your first number: ";
	std::cin >> a;

	std::cout << "Enter your second number: ";
	std::cin >> b;

	std::cout << "Enter your third number: ";
	std::cin >> c;


	int max, mid, min;
	
	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
	mid = a + b + c - max - min;

	std::cout << "Result: " << max << " " << mid << " " << min << std::endl;


	return 0;
}