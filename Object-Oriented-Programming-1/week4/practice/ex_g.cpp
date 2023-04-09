#include<iostream>
using namespace std;

void main() {
	int i = 1;

	switch (i - 2) {	// i - 2에 따라
		// 만약 i - 2.1이라면? 실수가 되기 때문에 실행 X
	case -1:	// i - 2 = -1
		cout << "Feeding fish" << endl;
	case 0:		// i - 2 = 0
		cout << "Weeding grass" << endl;
	case 1:		// i - 2 = 1
		cout << "Mending roof" << endl;
		break;	// switch문 탈출
	default:
		cout << "Just to survive" << endl;

	}
}