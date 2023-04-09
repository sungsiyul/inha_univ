// 3주차_강의자료.pdf 25페이지

#include <iostream>
using namespace std;

int main() {

	int number;

	cout << "insert the integer value : ";
	cin >> number;

	if (number > 0)
		cout << "the value is positive \n";
	if (number == 0) // =0 이 아니라 ==0을 써야함.
		cout << "the value is zero \n";
	if (number < 0)
		cout << "the value is negative \n";

	return 0;
}