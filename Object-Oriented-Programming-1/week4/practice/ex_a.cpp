#include<iostream>
using namespace std;

void main() {
	char suite = 2; //suite�� char�� ������ 3 �Ҵ�

	switch (suite) {	//suite�� ���ڿ� ����
	case 1:	//1�̸�
		cout << "Diamond" << endl;	//Diamond ���
		break;
	case 2:	//2�̸�
		cout << "Spade" << endl;	//Spade ���
		break;
	case 3:	//3�̸�
		cout << "Heart" << endl;	//Heart ���
		break;
	}
	cout << "I thought one wears a suite" << endl;
}