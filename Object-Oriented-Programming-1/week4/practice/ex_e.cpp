#include<iostream>
using namespace std;

void main() {
	int k;	// int 형으로 k 선언
	float j = 2.1;	// float형으로 j 선언, 2.1로 초기화

	switch (k = j + 1) {	// k는 j + 1이고 이 k값에 따라
		//k는 3.1인 것 같지만 k는 int형으로 선언 되었기 때문에 정수까지만 인식 (3)
	case 3:	// 3이면
		cout << "Trapped " << endl;
		break;
	default:
		cout << "Caught" << endl;
	}
}