#include<iostream>
#include<cmath>
using namespace std;

constexpr int SIZE = 11;

double xysum(double a[SIZE], double b[SIZE]);
double sum(double a[SIZE]);
double powsum(double a[SIZE]);

void main() {

	double x[SIZE] = { 34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15 };
	double y[SIZE] = { 102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65 };

	double son = (SIZE * xysum(x, y)) - (sum(x) * sum(y));
	double mom = sqrt((SIZE * powsum(x) - pow(sum(x), 2)) * (SIZE * powsum(y) - pow(sum(y), 2)));

	double r = son / mom;

	cout << "r = " << r << endl;
}

double xysum(double a[SIZE], double b[SIZE]) {

	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += a[i] * b[i];
	return sum;
}

double sum(double a[SIZE]) {

	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += a[i];
	return sum;
}

double powsum(double a[SIZE]) {

	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += pow(a[i], 2);
	return sum;
}