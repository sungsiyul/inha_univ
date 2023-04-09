#include <iostream>
using namespace std;

int main() {
	const double TAX_RATE = 0.15;	// 상수 선언
	double income, salary;

	cout << "insert your salary : ";
	cin >> salary;

	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;

	TAX_RATE = 0.20; // 상수로 선언해줬는데 값을 바꿔버리면 오류가 생김
	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;


	return 0;

}