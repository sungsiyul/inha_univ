#include<iostream>
using namespace std;

void main() {
	int i;
	
	cout << "< 홀짝 판별기 >" << "\n\n";

	for (;;)
	{
		cout << "숫자를 입력하시오 : ";
		cin >> i;

		i %= 2;

		switch (i)
		{
		case 0:
			cout << "짝수입니다!" << "\n\n";
			break;
		default:
			cout << "홀수입니다!" << "\n\n";
			break;
		}
	}
}