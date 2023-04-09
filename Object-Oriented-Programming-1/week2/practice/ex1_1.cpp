#include <iostream>

using namespace std;

int main() {
	short year = 0;
	int sale = 200000000;
	long total_sale = 0;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	cout << "total_sale = " << total_sale << " \n"; //endl 도 사용 가능

	cout << "size of short type " << sizeof(short) << "byte" << " \n";
	cout << "size of int type " << sizeof(int) << "byte" << "\n";
	cout << "size of long type " << sizeof(long) << "byte" << " \n";

	return 0;

}