//argument�� �ְ� return�� ����

#include <iostream>
using namespace std;

void printit(int i, int ch);

void main() {

	float a = 15.5;

	char ch = 'C';
	printit(a, ch);
}

void printit(int i, int ch) {				//int(float(15.5))

	cout << "first input = " << i << ", second input = " << ch << endl;

}