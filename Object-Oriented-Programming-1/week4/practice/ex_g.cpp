#include<iostream>
using namespace std;

void main() {
	int i = 1;

	switch (i - 2) {	// i - 2�� ����
		// ���� i - 2.1�̶��? �Ǽ��� �Ǳ� ������ ���� X
	case -1:	// i - 2 = -1
		cout << "Feeding fish" << endl;
	case 0:		// i - 2 = 0
		cout << "Weeding grass" << endl;
	case 1:		// i - 2 = 1
		cout << "Mending roof" << endl;
		break;	// switch�� Ż��
	default:
		cout << "Just to survive" << endl;

	}
}