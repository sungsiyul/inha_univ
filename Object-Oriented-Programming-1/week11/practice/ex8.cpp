#include<iostream>
using namespace std;

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
enum colors { white, red, blue, green, black};
enum boolean {T,F};
enum months{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
enum major{COMMUNCATION, COMPUTER, ELECTRIC, ELECTRONICS};
enum component{MAIN_BOARD, CPU, GRAPHIC_CARD, DISK, MEMORY};
enum levels{low = 1, medium, high};
enum CarOptions
{
	SunRoof = 0x01,
	Spoiler = 0x02,
	FogLight = 0x04,
	TintedWindows = 0x08
};

void main() {
	enum days days1;		//������ ������ days ����ؼ� days1 ����
	days1 = FRI;			

	int days2;				//int Ÿ�� days2 ����
	days2 = WED;

	if (days1 == 5) {
		cout << "Friday" << endl;
	}

	if (days2 == 3) {
		cout << "Wednesday" << endl;
	}

}