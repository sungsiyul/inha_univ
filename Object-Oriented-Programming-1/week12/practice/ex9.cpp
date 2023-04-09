#include <iostream>										//include the stdio header file
using namespace std;									//std를 안써도 cin, cout을 사용할 수 있게 함.
	
void swap(int x, int y);								//function prototype, 반환값 없음, 정수 2개를 넘겨받음.

int main() {											//main함수 선언, return값이 정수여야함.

	int a = 100, b = 200;								//정수형 변수 a, b 선언, 값을 a는 100 b는 200으로 초기화
	cout << "main() a = " << a << " b = " << b << endl;	//main함수에서 swap함수 call 이전의 a, b 값을 출력

	swap(a, b);											//swap 함수 call, 정수인 a, b값을 넘겨줌.

	cout << "main() a = " << a << " b = " << b << endl;	//main함수에서 swap함수 call 이후의 a, b 값을 출력
														//call by value이기 때문에 swap함수로 값이 변하지 않음.
	return 0;											//int main이기 때문에 정수(0)을 반환해줌.
}

void swap(int x, int y) {								//swap함수 정의, 반환값 없음. 정수 2개를 넘겨받음.
	int tmp;											//정수형 변수 tmp를 선언.

	cout << "swap() x = " << x << " y = " << y << endl;	//swap함수 내에서 x, y값을 출력.

	tmp = x;											//x 값을 tmp에 저장
	x = y;												//y 값을 x에 저장
	y = tmp;											//y 값을 tmp에 저장

	cout << "swap() x = " << x << " y = " << y << endl;	//x와 y를 바꾼 뒤 x, y값을 출력.

}