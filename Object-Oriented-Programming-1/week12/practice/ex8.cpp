#include <iostream>							//include the stdio header file
using namespace std;						//std를 안써도 cin, cout을 사용할 수 있게 함.

void sub(int* p);							//function prototype
											//parameter가 int*p이므로 call을 할 때 parameter가 주소값 형태여야함.
int main() {								//main함수 선언, return값이 정수여야함.

	int i = 100;							//정수형 변수 i를 생성하고 값을 100으로 초기화
	cout << "i = " << i << endl;			//함수 call 전 i값 출력
	sub(&i);								//sub함수 call. 주소값인 &i를 넘겨줌.
	cout << "i = " << i << endl;			//함수 call 전 i값 출력
	return 0;								//int main이기 때문에 정수(0)을 반환해줌.
}

void sub(int* p) {							//함수 정의, int*p(주소값)을 넘겨받음. return값 없음
	*p = 200;								//p의 값(i의 값)을 200으로 초기화
}