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
	case 1:										//case 뒤에는 int나 char constant만 가능함. 이런식의 범위지정은 switch 뒤에 쓰는 건 가능.
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