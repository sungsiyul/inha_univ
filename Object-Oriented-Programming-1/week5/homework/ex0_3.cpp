#include<iostream>
using namespace std;

int absolute(int x)
{
	if (x > 0) return x;
	else return -x;
}

int main() {
	int num, X;			//main �Լ��� ����� ���� ����

	cout << "Input number : ";	// input number : ���
	cin >> X;					// input �Է�

	num = absolute(X);			// 
	cout << "Result : " << num << endl; //

	return 0;
}