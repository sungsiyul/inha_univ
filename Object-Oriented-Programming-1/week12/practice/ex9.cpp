#include <iostream>										//include the stdio header file
using namespace std;									//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.
	
void swap(int x, int y);								//function prototype, ��ȯ�� ����, ���� 2���� �Ѱܹ���.

int main() {											//main�Լ� ����, return���� ����������.

	int a = 100, b = 200;								//������ ���� a, b ����, ���� a�� 100 b�� 200���� �ʱ�ȭ
	cout << "main() a = " << a << " b = " << b << endl;	//main�Լ����� swap�Լ� call ������ a, b ���� ���

	swap(a, b);											//swap �Լ� call, ������ a, b���� �Ѱ���.

	cout << "main() a = " << a << " b = " << b << endl;	//main�Լ����� swap�Լ� call ������ a, b ���� ���
														//call by value�̱� ������ swap�Լ��� ���� ������ ����.
	return 0;											//int main�̱� ������ ����(0)�� ��ȯ����.
}

void swap(int x, int y) {								//swap�Լ� ����, ��ȯ�� ����. ���� 2���� �Ѱܹ���.
	int tmp;											//������ ���� tmp�� ����.

	cout << "swap() x = " << x << " y = " << y << endl;	//swap�Լ� ������ x, y���� ���.

	tmp = x;											//x ���� tmp�� ����
	x = y;												//y ���� x�� ����
	y = tmp;											//y ���� tmp�� ����

	cout << "swap() x = " << x << " y = " << y << endl;	//x�� y�� �ٲ� �� x, y���� ���.

}