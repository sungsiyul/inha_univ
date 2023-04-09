#include<iostream>
using namespace std;

int get_integer();																//정수를 받는 함수
int combination(int n, int r);													// combination(조함) 함수
int factorial(int n);															//팩토리얼 함수

int main() {
	int a, b;

	a = get_integer();
	b = get_integer();

	cout << "C(" << a << "," << b << ") = " << combination(a, b) << endl;

	return 0;
}

int get_integer()
{
	int n;

	cout << "insert integer : ";
	cin >> n;

	return n;
}

int factorial(int n)
{
	long result=1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}

int combination(int n, int r)		//C(n,r)
{
	return(factorial(n) / (factorial(n - r) * factorial(r)));
}