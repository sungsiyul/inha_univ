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
		cout << "     "; // ���� 5��
	
	for (int date = 1; date <= DAYS_OF_MONTH; date++)
	{
		if (day == 7)
		{
			day = 0;
			cout << endl;
		}
		day++;
		cout << setw(5) << date; // setw(5)�� ����ϱ� ���� ������ #include<iomanip> �� �������.
	}
	cout << endl << "==========================================" << endl;
	return 0;
}