//argument�� �ְ� return�� �ִ�

#include <iostream>
using namespace std;

int addmult(int ii, int jj);						//addmult �Լ� ������Ÿ��

void main() {
	int i = 3, j = 4, k, l;							//main �Լ����� ���� ���� ����
	int sum, mul;

	k = addmult(i, j);								//addmult �Լ� return�� => k�Ҵ�
	l = addmult(i, j);								//addmult �Լ� return�� => l�Ҵ�

	cout << "k = " << k << ", l = " << l << endl;
}

int addmult(int ii, int jj) {
	int kk, ll;

	kk = ii + jj;
	ll = ii * jj;

	return (kk, ll);
}