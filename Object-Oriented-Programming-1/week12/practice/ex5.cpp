#include <iostream>						//include the stdio header file
using namespace std;					//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

int main() {							//main�Լ� ����, return���� ����������.

	int a[] = { 10, 20, 30, 40, 50 };	//������ �迭�� �����ϰ�, ���� �ʱ�ȭ ����(10,20,30,40,50)

	cout << "&a[0] = " << &a[0] << endl;//a�� 0��° ĭ�� �ּҸ� ���
	cout << "&a[1] = " << &a[1] << endl;//a�� 1��° ĭ�� �ּҸ� ���
	cout << "&a[2] = " << &a[2] << endl;//a�� 2��° ĭ�� �ּҸ� ���

	cout << "a = " << a;				//�׳� a�� ������� ���� ù��° ĭ�� �ּҰ� ��µ� &a[0]

	return 0;							//int main�̱� ������ ����(0)�� ��ȯ����.
}