#include<iostream>
using namespace std;

void main(){

	char a;

	cout << "���ڸ� �Է��Ͻÿ� : ";
	cin >> a;

	switch (a >= 65 && a <= 90) {
	case 1:
		cout << char(a + 32);
		break;
	default:
		cout << a;
	}
}