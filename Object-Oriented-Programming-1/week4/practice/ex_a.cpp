#include<iostream>
using namespace std;

void main() {
	char suite = 2; //suite는 char형 변수에 3 할당

	switch (suite) {	//suite의 숫자에 따라서
	case 1:	//1이면
		cout << "Diamond" << endl;	//Diamond 출력
		break;
	case 2:	//2이면
		cout << "Spade" << endl;	//Spade 출력
		break;
	case 3:	//3이면
		cout << "Heart" << endl;	//Heart 출력
		break;
	}
	cout << "I thought one wears a suite" << endl;
}