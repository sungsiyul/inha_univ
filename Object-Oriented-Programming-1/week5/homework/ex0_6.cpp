#include<iostream>
using namespace std;

int power(int x, int y)
{
	long result = 1;

	for (int i = 0; i < y; i++)
		result *= x;

	return result;
}

int main() {
	int num, X, Y;

	cout << "Input number : ";
	cin >> X;

	cout << "Input number : ";
	cin >> Y;

	num = power(X, Y);
	cout << "Result : " << num << endl;

	return 0;
}