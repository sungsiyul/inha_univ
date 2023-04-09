#include <iostream>												//include the stdio header file
using namespace std;											//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

struct point {													//point��� ����ü ����
	int x;														//������ ���� x ����
	int y;														//������ ���� y ����
};

int get_line_parameter(struct point p1, struct point p2, float* slope, float* yintercept)
//get_line_parameter �Լ� ����, ������ return, point��� ���·� 2��, �Ǽ������� ������ ���� 2���� �޾ƾ���.
{
	if (p1.x == p2.x)											//���ǹ�if : p1�� x���� p2�� x���� ���ٸ�
		return -1;												//-1�� return ����.
	else{														//�׷��� �ʴٸ�
		*slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x);	//*slope�� �� ������ ������� ������.
		*yintercept = p1.y - (*slope) * p1.x;					//*yintercept�� �� ������ ������� ������.
																//call by reference�̱� ������ main�Լ��� ���� ������.
		return 0;												//0�� return ����.
	}
}

int main() {													//main�Լ� ����, return���� ����������.

	struct point pt1 = { 3,3 }, pt2 = { 6,6 };					//point ������ ���� pt1, pt2�� ����, {3,3},{6,6}���� �ʱ�ȭ
	float s, y;													//�Ǽ��� ���� s, y ����.

	if (get_line_parameter(pt1, pt2, &s, &y) == -1)				//���ǹ� if: ���� get_line_parameter�� return���� -1�̶��
		cout << "error : same x axis\n";						//�ش� ������ ���
	else{														//�׷��� ������
		cout << "Gradient is " << s << ", y-intercept is " << y << endl; //s���� y���� ���
	}
		
	return 0;													//int main�̱� ������ ����(0)�� ��ȯ����.
}