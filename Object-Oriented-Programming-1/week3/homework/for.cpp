// 3����_�����ڷ�.pdf 9������

#include <iostream>
using namespace std;

int main() {
	int p, n; // ���⼭ ���� count�� ���� => C Ư¡
	float r, si;

	for (int count = 1; count <= 3; count = count + 1) { // int count =1 �̷� �� => C++ Ư¡
		cout << "Enter values of p, n and r\n";
		cin >> p >> n >> r;
		si = p * n * r / 100;
		cout << "Computed Result = " << si << "\n\n";

	}
	return 0;
}