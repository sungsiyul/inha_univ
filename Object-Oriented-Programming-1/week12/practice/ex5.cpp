#include <iostream>						//include the stdio header file
using namespace std;					//std를 안써도 cin, cout을 사용할 수 있게 함.

int main() {							//main함수 선언, return값이 정수여야함.

	int a[] = { 10, 20, 30, 40, 50 };	//정수형 배열을 생성하고, 값을 초기화 해줌(10,20,30,40,50)

	cout << "&a[0] = " << &a[0] << endl;//a의 0번째 칸의 주소를 출력
	cout << "&a[1] = " << &a[1] << endl;//a의 1번째 칸의 주소를 출력
	cout << "&a[2] = " << &a[2] << endl;//a의 2번째 칸의 주소를 출력

	cout << "a = " << a;				//그냥 a를 출력했을 때는 첫번째 칸의 주소가 출력됨 &a[0]

	return 0;							//int main이기 때문에 정수(0)을 반환해줌.
}