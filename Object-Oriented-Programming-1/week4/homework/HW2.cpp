#include<iostream>
using namespace std;

void main(){

	char a;

	cout << "문자를 입력하시오 : ";
	cin >> a;

	switch (a >= 65 && a <= 90) {
	case 1:
		cout << char(a + 32);
		break;
	default:
		cout << a;
	}
}