#include <iostream>							//include the stdio header file
using namespace std;						//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

int main() {								//main�Լ� ����, return���� ����������.

	int n = 10;								//������ ���� n ����, n�� 10���� �ʱ�ȭ
	int* m;	 								//int ������ �ּҰ��� ������ �� �ִ� ������ ���� m ����
	m = &n;									//n�� �ּҰ��� m�� ����
	cout << "address : " << m << endl;		//m�� ��(n�� �ּҰ�)�� ���

	n = 100;								//n�� ���� 100���� �ʱ�ȭ
	cout << "address : " << m;				//m�� ��(n�� �ּҰ�)�� ���

	return 0;								//int main�̱� ������ ����(0)�� ��ȯ����.
}