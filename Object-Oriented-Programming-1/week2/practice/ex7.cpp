#include <iostream>
using namespace std;

int main() {
	char x, x1, x2, x3;
	unsigned char y;
	x = -128;
	x1 = x - 1;
	x2 = x - 2;
	x3 = x - 3;

	cout << "x = " << x << endl;
	cout << "x-1 = " << x1 << endl;
	cout << "x-2 = " << x2 << endl;
	cout << "x-2 = " << x3 << endl;

	y = 256;
	cout << "y = " << y << endl;
	cout << "y+1 = " << y+1 << endl;
	cout << "y+2 = " << y+2 << endl;
	cout << "y+3 = " << y+3 << endl;

	return 0;
}