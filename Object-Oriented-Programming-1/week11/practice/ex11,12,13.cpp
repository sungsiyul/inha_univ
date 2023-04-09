#include<iostream>
using namespace std;

//#pragma pack(1)
#pragma pack(4)

union test {
	int a;
	double b;
	char name[9];
};

struct test1 {
	double a;
	char b;
	short c;
	int d;
};

struct test2 {
	char a;
	double b;
	short c;
	int d;
};

int main() {
	cout << sizeof(test) << endl;
	cout << sizeof(test1) << endl;
	cout << sizeof(test2) << endl;
}