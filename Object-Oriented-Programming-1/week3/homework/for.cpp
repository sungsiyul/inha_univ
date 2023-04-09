// 3주차_강의자료.pdf 9페이지

#include <iostream>
using namespace std;

int main() {
	int p, n; // 여기서 먼저 count를 선언 => C 특징
	float r, si;

	for (int count = 1; count <= 3; count = count + 1) { // int count =1 이런 식 => C++ 특징
		cout << "Enter values of p, n and r\n";
		cin >> p >> n >> r;
		si = p * n * r / 100;
		cout << "Computed Result = " << si << "\n\n";

	}
	return 0;
}