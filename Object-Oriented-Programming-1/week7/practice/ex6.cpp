#include<iostream>
using namespace std;
constexpr int SIZE = 5;

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];

	// a�� b�� ũ�Ⱑ ���ٰ� �ؼ� ���� �迭�� �ƴ�.

	int i;

	cout << "a �迭�� ���" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << "\n";

	cout << "b �迭�� ���" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << "\n";

	for (i = 0; i < SIZE; i++)
		b[i] = a[i];

	cout << "c �迭�� ���" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << "\n";

	cout << "d �迭�� ���" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << "\n";

	return 0;
}