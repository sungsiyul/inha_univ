#include <iostream>					//include the stdio header file
using namespace std;				//std를 안써도 cin, cout을 사용할 수 있게 함.

int main() {						//main함수 선언, return값이 정수여야함.

	char c = 'A';					//문자형 변수 c를 선언하고 값을 A로 초기화
	int i = 10000;					//정수형 변수 i를 선언하고 값을 10000으로 초기화
	double d = 6.78;				//실수형 변수 d를 선언하고 값을 6.78로 초기화
	char* pc = &c;					//char 형태의 포인터 변수 pc를 선언하고 c의 주소값을 저장함.
	int* pi = &i;					//int 형태의 포인터 변수 pi를 선언하고 i의 주소값을 저장함.
	double* pd = &d;				//double 형태의 포인터 변수 pd를 선언하고 d의 주소값을 저장함.

	(*pc)++;						//*pc는 pc에 들어있는 주소에 해당하는 값이기 때문에 c에다가 1을 더해줌.(A+1)
	*pi = *pi + 1;					//*pi는 pi에 들어있는 주소에 해당하는 값이기 때문에 i에다가 1을 더해줌.(10000+1)
	*pd += 1;						//*pd는 pd에 들어있는 주소에 해당하는 값이기 때문에 d에다가 1을 더해줌.(6.78+1)

	cout << "c = " << c << endl;	//c값을 출력
	cout << "i = " << i << endl;	//i값을 출력
	cout << "d = " << d << endl;	//d값을 출력

	return 0;						//int main이기 때문에 정수(0)을 반환해줌.
}