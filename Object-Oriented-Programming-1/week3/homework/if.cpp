// 3����_�����ڷ�.pdf 25������

#include <iostream>
using namespace std;

int main() {

	int number;

	cout << "insert the integer value : ";
	cin >> number;

	if (number > 0)
		cout << "the value is positive \n";
	if (number == 0) // =0 �� �ƴ϶� ==0�� �����.
		cout << "the value is zero \n";
	if (number < 0)
		cout << "the value is negative \n";

	return 0;
}