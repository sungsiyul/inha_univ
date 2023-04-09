#include <iostream>
using namespace std;

int main() {

	int x;
	unsigned int y;

	x = 2147483647;
	cout << "x = " << x << "\n";
	cout << "x+1 = " << x+1 << "\n";
	cout << "x+2 = " << x+2 << "\n";
	cout << "x+3 = " << x+3 << "\n";

	y = 4294967295;
	cout << "y = " << y << "\n";
	cout << "y+1 = " << y+1 << "\n";
	cout << "y+2 = " << y+2 << "\n";
	cout << "y+3 = " << y+3 << "\n";

	return 0;

}