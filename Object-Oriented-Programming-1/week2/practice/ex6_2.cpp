#include<iostream>
using namespace std;

int main() {

	float y = 6.5e2; // 6.5 * 10�� 2��

	cout << "y = " << y<<"\n";	//C++ : �Ҽ��� ǥ�� ����
	printf("y = %f\n", y);	//C : �Ҽ��� ǥ�� ��

	cout << scientific << "y = " << y << endl; //������ ǥ��� �� �� scientific
	printf("y = %e\n", y);	//C������ %e�� ���� ������ ǥ�⸦ ��.

	return 0;

}