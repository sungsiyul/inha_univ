#include<iostream>
using namespace std;

int square(int n)		//square �Լ� ����
{
	return (n * n);		// return ���� ������ ��ȯ
}

int get_max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

int absolute(int x)
{
	if (x > 0) return x;
	else return -x;
}

int draw_rect(int side)
{
	int x, y;
	for (y = 0; y < side; y++)		//����
	{
		for(x = 0; x <side; x++)	//�ʺ�
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}

int get_integer() {
	int n;
	cout << "integer value : ";
	cin >> n;

	return n;
}

int power(int x, int y)
{
	long result = 1;

	for (int i = 0; i < y; i++)
		result *= x;

	return result;

}

int factorial(int n)
{
	long result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;

}

void main() {
	int num, X, Y;			//main �Լ��� ����� ���� ����

	cout << "Input number : ";	// input number : ���
	cin >> X;					// input �Է�

	//cout << "Input number : ";	// input number : ���
	//cin >> Y;					// input �Է�

	num = factorial(X);			// 
	cout << "Result : " << num << endl; //

}
