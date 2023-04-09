#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int* pi;

	pi = new int[5];

	if (!pi)
	{
		cout << "메모리 할당 오류\n";
		exit(1);
	}

	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;

	cout << *pi << endl;
	cout << *(pi + 3) << endl;

	delete[]pi;
	return 0;
}