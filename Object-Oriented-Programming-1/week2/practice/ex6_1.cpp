#include <iostream>
using namespace std;

int main() {

	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	cout << "size of float = " << sizeof(float) << "\n";	// 4
	cout << "size of double = " << sizeof(double) << "\n";	// 8

	//cout << fixed;
	//cout.precision(25);	//fixed�� ������ �������� �����ؼ� ���� 25��
							//fixed�� ������ �Ҽ��� �Ʒ��� ���� 25��
	// �Ҽ��� ������ ������ �Ҽ��� �Ʒ� 5�ڸ����� �ݿø��ؼ� ����

	cout << "x = " << x << "\n"; // x = 1.2345678 806304931640625000 �ε��Ҽ��� 7�ڸ��� ��ȿ����
	cout << "y = " << y << "\n"; // y = 1.234567890123456 6904321355 �ε��Ҽ��� 15�ڸ��� ��ȿ����

}