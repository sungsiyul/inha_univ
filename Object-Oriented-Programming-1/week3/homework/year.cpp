// 3����_�����ڷ�.pdf 27������
// ���� �Ǵ� ���α׷�

#include <iostream>
using namespace std;

int main() {

	int year;

	cout << "insert the year : ";
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	// 4�� ������ �� ������ 0 & 100���� ������ �� ������ 0�� �ƴ� | �ٵ� 400���� ������ �� 0 �̸� ����
		cout << year << " year is leap year \n";

	else
		cout << year << " year is normal year \n";

	return 0;

}