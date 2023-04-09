#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Book {
	int number;
	char title[30];
};

int main() {
	struct Book* p;
	p = new Book[2];

	if (p == NULL)
	{
		cout << "MEMORY ALLOCATION ERROR\n";
		exit(1);
	}

	p->number = 1;
	strcpy_s(p->title, "C/C++ Programming");

	(p + 1)->number = 2;
	strcpy_s((p + 1)->title, "Data Structure");

	cout << p->number << endl;
	cout << p->title << endl;

	cout << (p+1)->number << endl;
	cout << (p+1)->title << endl;

	delete[] p;

	return 0;
}