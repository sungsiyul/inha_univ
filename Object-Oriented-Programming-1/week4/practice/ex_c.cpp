#include<iostream>
using namespace std;

void main() {
	int k, j = -1;
	// k�� j�� int ������ ����, j = -1�� �ʱ�ȭ

	switch (k = j + 1) {	//k = j + 1�̰�  k���� ����
		//switch�� �� int�� constant char�� �� �� ����.(float (x))
	case 0:	// k = 0 �̸�
		cout << "Tailor " << endl;	//Tailor ���
	case 1:	// k = 1 �̸�
		cout << "Tutor " << endl;	//Tutor ���
	case 2:	// k = 2 �̸�
		cout << "Tramp" << endl;	//Tramp ���
		break;
	default:	// ������ �� �̿��� ���̸�
		cout << "Pure simple Egghead" << endl;	// Pure simple Egghead ���
	}
}