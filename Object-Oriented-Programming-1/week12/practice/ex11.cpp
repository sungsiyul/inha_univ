#include <iostream>									//include the stdio header file
using namespace std;								//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

void addmult(int a, int b, int* sum, int* mult) {	//addmult �Լ� ����, ���� 2��, �ּҰ� 2���� ���ʴ�� �Ѱܹ���.
	*sum = a + b;									//�Ѱܹ��� ���� �ΰ�(a, b)�� ���� ���� *sum�� ����
	*mult = a * b;									//�Ѱܹ��� ���� �ΰ�(a, b)�� ���� ���� *mult�� ����
}

int main() {										//main�Լ� ����, return���� ����������.

	int x = 10;										//������ ���� x�� ����, ���� 10���� �ʱ�ȭ
	int y = 20;										//������ ���� y�� ����, ���� 20���� �ʱ�ȭ
	int s, m;										//������ ���� s, m�� ����

	addmult(x, y, &s, &m);							//addmult �Լ� call ���� x�� y, �ּҰ� &s, &m�� �Ѱ���.
													//s�� m�� �ּҰ��� �Ѱ�� ������(call bt reference)
													//addmult �Լ� ������ s�� m�� �ش��ϴ� ���� main�Լ������� ������.
	cout << "sum : " << s << ", mult : " << m;		//s���� m���� ���5

	return 0;										//int main�̱� ������ ����(0)�� ��ȯ����.
}