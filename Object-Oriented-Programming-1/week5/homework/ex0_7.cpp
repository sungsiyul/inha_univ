#include<iostream>
using namespace std;

int factorial(int n)
{
	long result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;

}

int main() {
	int num, X;

	cout << "Input number : ";
	cin >> X;

	num = factorial(X);
	cout << "Result : " << num << endl;

	return 0;
}