#include <iostream>									//include the stdio header file
using namespace std;								//std를 안써도 cin, cout을 사용할 수 있게 함.

void addmult(int a, int b, int* sum, int* mult) {	//addmult 함수 정의, 정수 2개, 주소값 2개를 차례대로 넘겨받음.
	*sum = a + b;									//넘겨받은 정수 두개(a, b)를 더한 값을 *sum에 저장
	*mult = a * b;									//넘겨받은 정수 두개(a, b)를 곱한 값을 *mult에 저장
}

int main() {										//main함수 선언, return값이 정수여야함.

	int x = 10;										//정수형 변수 x를 선언, 값을 10으로 초기화
	int y = 20;										//정수형 변수 y를 선언, 값을 20으로 초기화
	int s, m;										//정수형 변수 s, m를 선언

	addmult(x, y, &s, &m);							//addmult 함수 call 정수 x와 y, 주소값 &s, &m을 넘겨줌.
													//s와 m은 주소값을 넘겼기 때문에(call bt reference)
													//addmult 함수 내에서 s와 m에 해당하는 값은 main함수에서도 동일함.
	cout << "sum : " << s << ", mult : " << m;		//s값과 m값을 출력5

	return 0;										//int main이기 때문에 정수(0)을 반환해줌.
}