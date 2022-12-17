#include "Fun_Sum.h"

int Sum(int a, int b) {
	int sum = a + b;
	return sum;
}
double func(double num) {
    static double S = 10;
    double m = num * S;
    return m;
}
int arrMeanValue(int array[], const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum / size;
}
