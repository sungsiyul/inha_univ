#include<iostream>
using namespace std;

union example {		//����üunion example�̶�� data type�� ����.

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
	//? �� ������ ������ ���ذ� �� �ȵ�.

	v2.i = 100;
	cout << "v2.c : " << v2.c << ", v2.i : " << v2.i << endl;

	return 0;
}