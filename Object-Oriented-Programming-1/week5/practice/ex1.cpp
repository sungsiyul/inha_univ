#include<iostream>
using namespace std;

int add(int a, int b);

void main() {
	int x = 1, y = 2, z;
	z = add(x, y);
	cout << z;
}

int add(int a, int b)
{
	return a + b;
}