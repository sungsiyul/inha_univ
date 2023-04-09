#include <iostream>
using namespace std;

int main() {
	const double TAX_RATE = 0.15;	// 상수 선언
	double income, salary;

	cout << "insert your salary : ";
	cin >> salary;

	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;

	return 0;

}