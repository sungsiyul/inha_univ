#include<iostream>
using namespace std;
constexpr int SIZE = 5;

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];

	// a와 b의 크기가 같다고 해서 같은 배열이 아님.

	int i;

	cout << "a 배열값 출력" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << "\n";

	cout << "b 배열값 출력" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << "\n";

	for (i = 0; i < SIZE; i++)
		b[i] = a[i];

	cout << "c 배열값 출력" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << "\n";

	cout << "d 배열값 출력" << "\n";

	for (i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << "\n";

	return 0;
}