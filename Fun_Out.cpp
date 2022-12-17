#include "Fun_Out.h"
#include <iostream>

void Out(char a) {
	std::cout << a << '\n';
}
void Print(const int* arr, int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
}
void Number() {
	std::cout << "Enter number from 1 to 4 ";
	int n;
	std::cin >> n;
	if (n == 1) {
		std::cout << "One.\n";
	}
	else {
		if (n == 2) {
			std::cout << "Two.\n";
		}
		else if (n == 3) {
			std::cout << "Three.\n";
		}
		else if (n == 4) {
			std::cout << "Four.\n";
		}
		else
			std::cout << "Error.\n";
	}
}