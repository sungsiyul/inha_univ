//argument�� ���� return�� �ִ�

#include <iostream>
using namespace std;

int message();

void main() {
	int a = message();	//����� ���ÿ� ���� ����(C++)
	cout << a;			//return 0�̱� ������ a�� 0�� ���� 0 ���
}

int message() {			//message �Լ� ����
	cout << endl << "Viruses are written in C";	//��¹�
	return 0;			// 0 �� ��ȯ
}