// 3주차_강의자료.pdf 27페이지
// 윤년 판단 프로그램

#include <iostream>
using namespace std;

int main() {

	int year;

	cout << "insert the year : ";
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	// 4로 나눴을 때 나머지 0 & 100으로 나눴을 때 나머지 0이 아님 | 근데 400으로 나눴을 때 0 이면 가능
		cout << year << " year is leap year \n";

	else
		cout << year << " year is normal year \n";

	return 0;

}