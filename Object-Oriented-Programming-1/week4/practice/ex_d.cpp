#include<iostream>
using namespace std;

void main() {
	int i = 0;	// i를 int형 선언 후 0 할당

	switch (i) {	//i값에 따라
	case 0:		//0이면
		cout << "Customers are dicey" << endl;
	case 1:		//1이면
		cout << "Markets are pricey" << endl;
	case 2:		//2이면
		cout << "Invertors are moody" << endl;
		break;	//switch 탈출
	default:	//그 외의 값이면
		cout << "At least employees are good" << endl;
	}
}