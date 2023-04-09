#include <iostream>							//include the stdio header file
using namespace std;						//std를 안써도 cin, cout을 사용할 수 있게 함.

int main() {								//main함수 선언, return값이 정수여야함.

	int n = 10;								//정수형 변수 n 생성, n을 10으로 초기화
	int* m;	 								//int 형태의 주소값을 저장할 수 있는 포인터 변수 m 생성
	m = &n;									//n의 주소값을 m에 저장
	cout << "address : " << m << endl;		//m의 값(n의 주소값)을 출력

	n = 100;								//n의 값을 100으로 초기화
	cout << "address : " << m;				//m의 값(n의 주소값)을 출력

	return 0;								//int main이기 때문에 정수(0)을 반환해줌.
}