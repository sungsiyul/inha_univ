#include<iostream>
using namespace std;

void main() {
	int c = 'x';		// int형태 변수 c에 5를 할당

	switch (c) {		// c가 무엇이냐에 따라
	case 'x':		// c = 문자 x면
		cout << "I am in case x" << endl;	// I am in case v를 출력
		break;
	case 3:			// c = 3이면
		cout << "I am in case 3" << endl;	// I am in case 3를 출력
		break;
	case 12:		// c = 3이면
		cout << "I am in case 12" << endl;	// I am in case 12를 출력
		break;
	default:		// c = v, 3, 12 모두 아닐때
		cout << "I am in default" << endl;	// I am in case default를 출력

	}
}