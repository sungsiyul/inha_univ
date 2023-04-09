#include <iostream>
using namespace std;

int main() {

	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	cout << "size of float = " << sizeof(float) << "\n";	// 4
	cout << "size of double = " << sizeof(double) << "\n";	// 8

	//cout << fixed;
	//cout.precision(25);	//fixed가 없으면 정수까지 포함해서 숫자 25개
							//fixed가 있으면 소수점 아래만 숫자 25개
	// 소수점 고정이 없으면 소수점 아래 5자리까지 반올림해서 나옴

	cout << "x = " << x << "\n"; // x = 1.2345678 806304931640625000 부동소수점 7자리의 유효숫자
	cout << "y = " << y << "\n"; // y = 1.234567890123456 6904321355 부동소수점 15자리의 유효숫자

}