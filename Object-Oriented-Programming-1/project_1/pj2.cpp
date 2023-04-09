#include<iostream>
#include<cmath>
using namespace std;

constexpr int SIZE = 10;

double avg(double a[SIZE]);
double xysum(double a[SIZE], double b[SIZE]);
double sum(double a[SIZE]);
double powsum(double a[SIZE]);

void main() {

	double x[SIZE] = { 3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0 };
	double y[SIZE] = { 1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0 };

	double b = ((SIZE * xysum(y, x)) - (sum(x) * sum(y))) / ((SIZE * powsum(x)) - pow(sum(x), 2));
	double a = avg(y) - (b * avg(x));


	cout << "a = " << a << ", b = " << b << "\n\n";

}

double avg(double a[SIZE]) {

	double average = 0;
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum = sum + a[i];
	average = sum / SIZE;
	return average;
}

double xysum(double a[SIZE], double b[SIZE]) {

	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum = sum + a[i] * b[i];
	return sum;
}

double sum(double a[SIZE]) {

	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum = sum + a[i];
	return sum;
}

double powsum(double a[SIZE]) {

	double sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum = sum + pow(a[i], 2);
	return sum;
}