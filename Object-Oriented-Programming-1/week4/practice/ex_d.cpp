#include<iostream>
using namespace std;

void main() {
	int i = 0;	// i�� int�� ���� �� 0 �Ҵ�

	switch (i) {	//i���� ����
	case 0:		//0�̸�
		cout << "Customers are dicey" << endl;
	case 1:		//1�̸�
		cout << "Markets are pricey" << endl;
	case 2:		//2�̸�
		cout << "Invertors are moody" << endl;
		break;	//switch Ż��
	default:	//�� ���� ���̸�
		cout << "At least employees are good" << endl;
	}
}