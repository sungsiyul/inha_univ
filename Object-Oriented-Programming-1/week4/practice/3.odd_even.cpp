#include<iostream>
using namespace std;

void main() {
	int i;
	
	cout << "< Ȧ¦ �Ǻ��� >" << "\n\n";

	for (;;)
	{
		cout << "���ڸ� �Է��Ͻÿ� : ";
		cin >> i;

		i %= 2;

		switch (i)
		{
		case 0:
			cout << "¦���Դϴ�!" << "\n\n";
			break;
		default:
			cout << "Ȧ���Դϴ�!" << "\n\n";
			break;
		}
	}
}