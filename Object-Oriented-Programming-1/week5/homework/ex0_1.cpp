#include<iostream>
using namespace std;

int square(int n)
{
	return (n * n);
}

int main() {
	int num, X;			//main �Լ��� ����� ���� ����

	cout << "Input number : ";	// input number : ���
	cin >> X;					// input �Է�

	num = square(X);			// 
	cout << "Result : " << num << endl; //

	return 0;
}