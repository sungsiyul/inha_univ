#include<iostream>
using namespace std;

union example {		//공용체union example이라는 data type을 만듬.

	int i;			//int(4byte)
	char c;			//char(1byte)
};

int main() {
	union example v, v2;

	v.i = 100;
	cout << "v.c : " << v.c << ", v.i : " << v.i << endl;

	v.c = 'A';
	cout << "v.c : " << v.c << ", v.i : " << v.i << endl;

	v2.c = 'A';
	cout << "v2.c : " << v2.c << ", v2.i : " << v2.i << endl;
	//? 왜 쓰레기 값인지 이해가 잘 안됨.

	v2.i = 100;
	cout << "v2.c : " << v2.c << ", v2.i : " << v2.i << endl;

	return 0;
}