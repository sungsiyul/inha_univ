#include <iostream>					//include the stdio header file
using namespace std;				//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

int main() {						//main�Լ� ����, return���� ����������.
	int i = 10000;					//������ ���� i�� �����ϰ� ���� 10000���� �ʱ�ȭ
	int* p, * q;					//int������ ������ ���� p�� q�� ����.

	p = &i;							//p�� i�� �ּҰ��� ����.
	q = &i;							//q�� i�� �ּҰ��� ����.

	*p = *p + 1;					//p �ּҿ� ����� ��(i) = p �ּҿ� ����� ��(i) + 1
	*q = *q + 1;					//q �ּҿ� ����� ��(i) = q �ּҿ� ����� ��(i) + 1
	
	cout << "i = " << i << endl;	//i�� ���.

	return 0;						//int main�̱� ������ ����(0)�� ��ȯ����.
}