#include <iostream>
using namespace std;

int a = 0;

void main() {

	a += 1;

	if (a > 10) {
		return;
	}

	cout << "C to it that C survives" << endl;
	main();		//main�Լ����� main�Լ� call

}