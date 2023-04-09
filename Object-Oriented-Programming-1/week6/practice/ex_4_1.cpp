//argument도 있고 return도 있는

#include <iostream>
using namespace std;

int addmult(int ii, int jj);						//addmult 함수 프로토타입

void main() {
	int i = 3, j = 4, k, l;							//main 함수에서 쓰일 변수 선언
	int sum, mul;

	k = addmult(i, j);								//addmult 함수 return값 => k할당
	l = addmult(i, j);								//addmult 함수 return값 => l할당

	cout << "k = " << k << ", l = " << l << endl;
}

int addmult(int ii, int jj) {
	int kk, ll;

	kk = ii + jj;
	ll = ii * jj;

	return (kk, ll);
}