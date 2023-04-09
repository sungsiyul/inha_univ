#include<iostream>
using namespace std;

int square(int a);		//square 함수의 프로토타입 생성

int main() {
	int x = 15, z;		// x, z를 int 선언, x = 15로 초기화
	z = square(x);		// 함수를 call해주고 result를 z에 할당
	cout << "z = " << z << "\n";		// 결과 출력

	return 0;
}

int square(int a)
{
	return (a * a);						// input 값 제곱
}