#include<iostream>
using namespace std;

void main() {
	int c = 'x';		// int���� ���� c�� 5�� �Ҵ�

	switch (c) {		// c�� �����̳Ŀ� ����
	case 'x':		// c = ���� x��
		cout << "I am in case x" << endl;	// I am in case v�� ���
		break;
	case 3:			// c = 3�̸�
		cout << "I am in case 3" << endl;	// I am in case 3�� ���
		break;
	case 12:		// c = 3�̸�
		cout << "I am in case 12" << endl;	// I am in case 12�� ���
		break;
	default:		// c = v, 3, 12 ��� �ƴҶ�
		cout << "I am in default" << endl;	// I am in case default�� ���

	}
}