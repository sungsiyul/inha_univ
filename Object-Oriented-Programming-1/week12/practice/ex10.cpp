#include <iostream>												//include the stdio header file
using namespace std;											//std를 안써도 cin, cout을 사용할 수 있게 함.

void swap(int *, int *);										//function prototype, 반환값 없음, 주소값 2개를 넘겨받음.

int main() {													//main함수 선언, return값이 정수여야함.

	int a = 100, b = 200;										//정수형 변수 a, b 선언, 값을 a는 100 b는 200으로 초기화
	cout << "main() a = " << a << " b = " << b << endl;			//main함수에서 swap함수 call 이전의 a, b 값을 출력

	swap(&a, &b);												//swap 함수 call, a와 b의 주소값을 넘겨줌.

	cout << "main() a = " << a << " b = " << b << endl;			//main함수에서 swap함수 call 이후의 a, b 값을 출력
																//call by reference이기 때문에 swap함수에서의 값과 같아짐.
	return 0;													//int main이기 때문에 정수(0)을 반환해줌.
}

void swap(int *px, int *py) {									//swap함수 정의, 반환값 없음. 주소값 2개를 넘겨받음.
	int tmp;													//정수형 변수 tmp를 선언.

	cout << "swap() *px = " << *px << " *py = " << *py << endl;	//swap함수 내에서 *px, *py값을 출력.

	tmp = *px;													//*px 값을 tmp에 저장
	*px = *py;													//*py 값을 *px에 저장
	*py = tmp;													//*py 값을 tmp에 저장

	cout << "swap() *px = " << *px << " *py = " << *py << endl;	//*px와 *py를 바꾼 뒤 *px, *py값을 출력.

}