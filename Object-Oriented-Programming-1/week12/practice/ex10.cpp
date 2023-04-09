#include <iostream>												//include the stdio header file
using namespace std;											//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

void swap(int *, int *);										//function prototype, ��ȯ�� ����, �ּҰ� 2���� �Ѱܹ���.

int main() {													//main�Լ� ����, return���� ����������.

	int a = 100, b = 200;										//������ ���� a, b ����, ���� a�� 100 b�� 200���� �ʱ�ȭ
	cout << "main() a = " << a << " b = " << b << endl;			//main�Լ����� swap�Լ� call ������ a, b ���� ���

	swap(&a, &b);												//swap �Լ� call, a�� b�� �ּҰ��� �Ѱ���.

	cout << "main() a = " << a << " b = " << b << endl;			//main�Լ����� swap�Լ� call ������ a, b ���� ���
																//call by reference�̱� ������ swap�Լ������� ���� ������.
	return 0;													//int main�̱� ������ ����(0)�� ��ȯ����.
}

void swap(int *px, int *py) {									//swap�Լ� ����, ��ȯ�� ����. �ּҰ� 2���� �Ѱܹ���.
	int tmp;													//������ ���� tmp�� ����.

	cout << "swap() *px = " << *px << " *py = " << *py << endl;	//swap�Լ� ������ *px, *py���� ���.

	tmp = *px;													//*px ���� tmp�� ����
	*px = *py;													//*py ���� *px�� ����
	*py = tmp;													//*py ���� tmp�� ����

	cout << "swap() *px = " << *px << " *py = " << *py << endl;	//*px�� *py�� �ٲ� �� *px, *py���� ���.

}