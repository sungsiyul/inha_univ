#include <iostream>					//include the stdio header file
using namespace std;				//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

int get_max2(int x, int y);			//int get_max2(int x, int y) �Լ��� ������Ÿ��
int get_max3(int x, int y, int z);	//int get_max3(int x, int y, int z) �Լ��� ������Ÿ��
int main(void) {					//main �Լ� ����, int�� �����߱� ������ return ���� ������ ��ȯ�ؾ���.
	int max1, max2;					//max1, max2�� ���������� ����
	int x = 2, y = 5, z = -2;		//x, y, z�� ���������� ����, x=2, y=5, z=-2�� �ʱ�ȭ.
	max1 = get_max2(x, z);			//get_max2 �Լ� call. x��(2)�� z��(-2)�� argument�� ���. �Լ��� return���� max1�� �Է�
	max2 = get_max3(x, y, z);		//get_max3 �Լ� call. x��(2)�� y��(5), z��(-2)�� argument�� ���. �Լ��� return���� max2�� �Է�

	cout << "the maximum value is " << max1 << "\n";	// ��¹� "the maximum value is 2" ���
	cout << "the maximum value is " << max2 << "\n";	// ��¹� "the maximum value is 5" ���

	return 0;						//main�Լ��� int�� �����߱� ������ ���� 0�� ��ȯ
}

int get_max2(int x, int y) {		//int get_max2(int x, int y)�Լ� ����. int x, int y���� parameters�� ���.
									//int�� �����߱� ������ return���� ������ ��ȯ�ؾ���.
	if (x > y)						//���ǹ� ���. x�� y���� Ŭ ��
		return x;					//x���� return ��.
	else							//�� ���� ��쿡(x�� y���� �۰ų� ������)
		return y;					//y���� return ��.
}								

int get_max3(int x, int y, int z) {	//int get_max3(int x, int y, int z)�Լ� ����. int x, int y, int z���� parameters�� ���.
									//int�� �����߱� ������ return���� ������ ��ȯ�ؾ���.
	if (x > y) {					//���� if�� ���. x�� y���� Ŭ ��
		if (x > z)					//�� ū ���� x�� ������ ���� z�� ���Ͽ� x�� �� ũ�ٸ�
			return x;				//x�� return
		else						//�̿��� ���(�� ū ���� x�� ������ ���� z�� ���Ͽ� x�� �� �۰ų� ���ٸ�)
			return z;				//z�� return
	}
	else {							//�ٱ��� if�� �̿��� ���(x�� y���� �۰ų� ���ٸ�)
		if (y > z)					//�� ū ���� y�� ������ ���� z�� ���Ͽ� y�� �� ũ�ٸ�
			return y;				//y�� return
		else						//�̿��� ���(�� ū ���� y�� ������ ���� z�� ���Ͽ� y�� �� �۰ų� ���ٸ�)
			return z;				//z�� return
	}
}