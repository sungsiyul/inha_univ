#include <iostream>
#include <iomanip>
#define START_DAY 5
#define DAYS_OF_MONTH 31
using namespace std;

int main() {

	int day;

	cout << "==========================================" << endl;
	cout << "  Sun. Mon. Tue. Wed. Thu. Fri. Sat. " << endl;
	cout << "==========================================" << endl;

	for (day = 0; day < START_DAY; day++)
		cout << "     "; // 공백 5개
	
	for (int date = 1; date <= DAYS_OF_MONTH; date++)
	{
		if (day == 7)
		{
			day = 0;
			cout << endl;
		}
		day++;
		cout << setw(5) << date; // setw(5)를 사용하기 위에 위에서 #include<iomanip> 를 써줘야함.
	}
	cout << endl << "==========================================" << endl;
	return 0;
}