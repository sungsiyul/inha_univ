#include<iostream>
using namespace std;

void main() {
	int temp;
	cin >> temp;

	if (temp < 0)
		temp = 0;

	switch (temp/10)
	{
	case 0:
	case 1:										//case �ڿ��� int�� char constant�� ������. �̷����� ���������� switch �ڿ� ���� �� ����.
		cout << "\nOoooooohhhh! Damn cool!";
		break;
	case 2:
		cout << "\nRain rain here again!";
		break;
	case 3:
		cout << "\nWish I am on Everest";
		break;
	default:
		cout << "\nGood old nagpur weather";
	}
}