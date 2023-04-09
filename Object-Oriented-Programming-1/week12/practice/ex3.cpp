#include <iostream>					//include the stdio header file
using namespace std;				//std를 안써도 cin, cout을 사용할 수 있게 함.

int main() {						//main함수 선언, return값이 정수여야함.
	int i = 10000;					//정수형 변수 i를 선언하고 값을 10000으로 초기화
	int* p, * q;					//int형태의 포인터 변수 p와 q를 선언.

	p = &i;							//p에 i의 주소값을 저장.
	q = &i;							//q에 i의 주소값을 저장.

	*p = *p + 1;					//p 주소에 저장된 값(i) = p 주소에 저장된 값(i) + 1
	*q = *q + 1;					//q 주소에 저장된 값(i) = q 주소에 저장된 값(i) + 1
	
	cout << "i = " << i << endl;	//i값 출력.

	return 0;						//int main이기 때문에 정수(0)을 반환해줌.
}