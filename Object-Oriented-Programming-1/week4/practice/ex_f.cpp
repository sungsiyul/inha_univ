#include<iostream>
using namespace std;

void main() {
	int ch = 65; // a = 97, b =98 , a + b = 195

	switch (ch) {	//ch�� ����
	case 'a':		// a�̸�
					// �ƹ��͵� ����
		break;
	case 'b':		// b�̸�
		cout << "You entered b " << endl;	//You entered b ���
		break;
	case 'A':		// A�̸�
		cout << "a as in ashar" << endl;	//a as in ashar ���
		break;
	case 'b' + 'a':	// b + a �̸� (195�̸�)
		cout << "You entered a and b" << endl;	//You entered a and b ���

	}

}