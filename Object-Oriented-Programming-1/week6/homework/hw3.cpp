#include <iostream>					//include the stdio header file
using namespace std;				//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

int add(int a);						//int add(int a) �Լ��� ������Ÿ��
int add_even(int a);				//int add_even(int a) �Լ��� ������Ÿ��
int add_odd(int a);					//int add_odd(int a) �Լ��� ������Ÿ��

int main() {						//main �Լ� ����, int�� �����߱� ������ return ���� ������ ��ȯ�ؾ���.
	int n;							//n�� ���������� ����
	
	cout << "n�� �Է��Ͻÿ� : ";	//��¹� : n�� �Է��Ͻÿ�
	cin >> n;						//n�� ���� ���� �Է�

	int sum = add(n);				//add �Լ� call. ���� �Է��� n�� argument�� ���. �Լ��� return���� sum�� �Է�
	int sum_even = add_even(n);		//add_even �Լ� call. ���� �Է��� n�� argument�� ���. �Լ��� return���� sum_even�� �Է�
	int sum_odd = add_odd(n);		//add_odd �Լ� call. ���� �Է��� n�� argument�� ���. �Լ��� return���� sum_odd�� �Է�

	cout << "1~n������ �� : " << sum <<						//��¹� : 1~n������ �� : sum�� ���
		"\n1~n������ ¦���� �� : " << sum_even <<			//         1~n������ ¦���� �� : sum_even�� ���
		"\n1~n������ Ȧ���� �� : " << sum_odd << "\n";		//		   1~n������ Ȧ���� �� : sum_odd�� ���

	return 0;						//main�Լ��� int�� �����߱� ������ ���� 0�� ��ȯ
}

int add(int n) {								//int add �Լ� ����, int n���� parameter�� ���
	
	int sum = 0;								//sum�� ���������� ����, sum���� 0���� �ʱ�ȭ
												//(local����, ������ �Լ����� �ٸ� sum���� ����)
	for (int i = 1; i <= n; i++) {				//for�� ���.i�� ���������� ����.i=1�� �ʱ�ȭ.i�� 1�� ����.����(i<=n) ��� ������ �ݺ�
		sum += i;								//sum = sum + i�� ���� sum���� �����Ͽ� ������.
	}
	return sum;									//sum���� return ����.
}

int add_even(int n) {							//int add_even �Լ� ����, int n���� parameter�� ���

	int sum = 0;								//sum�� ���������� ����, sum���� 0���� �ʱ�ȭ 
												//(local����, ������ �Լ����� �ٸ� sum���� ����)
	for (int i = 1; (2 * i) <= n; i++) {		//for�� ���.i�� ���������� ����.i=1�� �ʱ�ȭ.i�� 1�� ����.����(2*i<=n) ��������� �ݺ�
		sum += (2 * i);							//sum = sum + (2*i)�� ���� sum���� �����Ͽ� ¦���� ������.
	}
	return sum;									//sum���� return ����.
}

int add_odd(int n) {							//int add_odd �Լ� ����, int n���� parameter�� ���

	int sum = 0;								//sum�� ���������� ����, sum���� 0���� �ʱ�ȭ 
												//(local����, ������ �Լ����� �ٸ� sum���� ����)
	for (int i = 1; (2 * i) - 1 <= n; i++) {	//for�����.i������������ ����.i=1�� �ʱ�ȭ.i�� 1�� ����.����((2*i)-1<=n)����������ݺ�
		sum += (2 * i) - 1;						//sum = sum + (2*i)-1 �� ���� sum���� �����Ͽ� ¦���� ������.
	}
	return sum;									//sum���� return ����.
}