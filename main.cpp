#include <iostream>
#include <string>
#include "Fun_Sum.h"
#include "Fun_Out.h"

int main() {
	const int size = 3;
	int arr[size]{ 5, 70, 2 };

	Sum(50, 30);
	func(50.5);
	arrMeanValue(arr, size);
	
	Out('*');
	Print(arr, size);
	Number();
	
	return 0;
}