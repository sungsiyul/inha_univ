#include<iostream>
using namespace std;

void main() {
	int k, j = -1;
	// k와 j는 int 형으로 선언, j = -1로 초기화

	switch (k = j + 1) {	//k = j + 1이고  k값에 따라
		//switch에 는 int와 constant char만 들어갈 수 있음.(float (x))
	case 0:	// k = 0 이면
		cout << "Tailor " << endl;	//Tailor 출력
	case 1:	// k = 1 이면
		cout << "Tutor " << endl;	//Tutor 출력
	case 2:	// k = 2 이면
		cout << "Tramp" << endl;	//Tramp 출력
		break;
	default:	// 정해진 값 이외의 값이면
		cout << "Pure simple Egghead" << endl;	// Pure simple Egghead 출력
	}
}