#include <iostream>
using namespace std;

int check(int ch);

void main() {

	int i = 60;				//main�Լ����� ����� ����
	int c = check(i);		//i�� check��� �Լ��� input ����ϰ� ���� output�� c�� �Ҵ�
	cout << c << endl;		//c�� ���
}

int check(int ch) {
	if (ch >= 45)			//input�� 45���� ũ��
		return 100;			//100 ����
	else					//�ƴ϶��
		return 10;			//10 ����

}