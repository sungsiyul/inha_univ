#include <iostream>					//include the stdio header file
using namespace std;				//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

int main() {						//main�Լ� ����, return���� ����������.

	int i;							//������ ���� i�� ����.
	double* pd;						//double������ ������ ������ pd�� ����.

	pd = &i;						//Error�߻� : ������ ������ �ְ� ���� �ּ��� ���� data type�� ��ġ�ؾ���.
	*pd = 36.5;						//pd���� 36.5�� �־���. 

	return 0;						//int main�̱� ������ ����(0)�� ��ȯ����.
}