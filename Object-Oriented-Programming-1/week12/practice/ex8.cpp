#include <iostream>							//include the stdio header file
using namespace std;						//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

void sub(int* p);							//function prototype
											//parameter�� int*p�̹Ƿ� call�� �� �� parameter�� �ּҰ� ���¿�����.
int main() {								//main�Լ� ����, return���� ����������.

	int i = 100;							//������ ���� i�� �����ϰ� ���� 100���� �ʱ�ȭ
	cout << "i = " << i << endl;			//�Լ� call �� i�� ���
	sub(&i);								//sub�Լ� call. �ּҰ��� &i�� �Ѱ���.
	cout << "i = " << i << endl;			//�Լ� call �� i�� ���
	return 0;								//int main�̱� ������ ����(0)�� ��ȯ����.
}

void sub(int* p) {							//�Լ� ����, int*p(�ּҰ�)�� �Ѱܹ���. return�� ����
	*p = 200;								//p�� ��(i�� ��)�� 200���� �ʱ�ȭ
}