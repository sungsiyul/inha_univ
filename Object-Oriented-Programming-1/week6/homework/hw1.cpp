#include <iostream>																	//include the stdio header file
using namespace std;																//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

int N = 1000;																		//N�� ���������� ����, ���������� ���, N�� ���� 1000���� �ʱ�ȭ
int cal_sum();																		//int cal_sum�̶�� �Լ��� ������Ÿ��

void main() {																		//main �Լ� ����, void�̱� ������ return �� ����.
	int sum;																		//sum�� ���������� ����
	sum = cal_sum();																//cal_sum()�Լ��� call����. �Լ��� return���� sum�� �Է�.
	{																				//��ȣ ����, �� �ȿ��� ����� ������ �� ��ȣ �ȿ����� ��� ����(local ����)
		int k;																		//k�� ���������� ����
		k = 9;																		//k�� ���� 9�� �ʱ�ȭ
		cout << "k = " << k << "\n";												//��¹� "k = 9" ���
	}																				//��ȣ �ݱ�, �� �ȿ��� ����� ������ �� ��ȣ �ȿ����� ��� ����(local ����)
	cout << "sum of first " << N << " naural numbers is " << sum << "\n";			//��¹� "sum of first 1000 naural numbers is 1001
}																					//main�Լ� ��ȣ �ݱ�.

int cal_sum() {																		//int cal_sum()�Լ� ����, parameter�� ������ return���� �ִ� ����
	int i, s = 0;																	//i�� s�� ���������� ����, s�� 0���� �ʱ�ȭ
	for (i = 0; i <= N; i++) {														//for��(�ݺ���) ���, i�� 0���� ����, i++(i�� 1�� ����), ���ǿ� ��� ������ �ݺ�, i <= 1000
		s = s + 1;																	//���� ���ǿ� ����� �ʴ´ٸ� s = s + 1 ����, s += 1�ε� ��� ����
	}																				//for�� ��ȣ �ݱ�.
	return (s);																		//cal_sum()�Լ����� s���� return����
}																					//int cal_sum()�Լ� ��ȣ �ݱ�.