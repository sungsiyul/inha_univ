#include<iostream>
using namespace std;

int square(int a);		//square �Լ��� ������Ÿ�� ����

int main() {
	int x = 15, z;		// x, z�� int ����, x = 15�� �ʱ�ȭ
	z = square(x);		// �Լ��� call���ְ� result�� z�� �Ҵ�
	cout << "z = " << z << "\n";		// ��� ���

	return 0;
}

int square(int a)
{
	return (a * a);						// input �� ����
}