#include<iostream>
using namespace std;

void main() {
	int k;	// int ������ k ����
	float j = 2.1;	// float������ j ����, 2.1�� �ʱ�ȭ

	switch (k = j + 1) {	// k�� j + 1�̰� �� k���� ����
		//k�� 3.1�� �� ������ k�� int������ ���� �Ǿ��� ������ ���������� �ν� (3)
	case 3:	// 3�̸�
		cout << "Trapped " << endl;
		break;
	default:
		cout << "Caught" << endl;
	}
}