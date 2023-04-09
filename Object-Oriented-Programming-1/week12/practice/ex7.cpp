#include <iostream>							//include the stdio header file
using namespace std;						//std를 안써도 cin, cout을 사용할 수 있게 함.

int main() {								//main함수 선언, return값이 정수여야함.

	int a[] = { 10, 20, 30, 40, 50 };		//정수형 배열을 생성하고, 값을 초기화 해줌(10,20,30,40,50)
	int* p;									//int 형태의 포인터 변수 p를 생성.

	p = a;									//a의 첫번째 인덱스의 주소를 p에 저장.
	cout << "a[0] = " << a[0]				//a[0]을 출력.
		<< ", a[1] = " << a[1]				//a[1]을 출력.
		<< ", a[2] = " << a[2] << endl;		//a[2]을 출력.
	cout << "p[0] = " << p[0]				//p[0]을 출력, a의 주소가 p에 저장, a의 값과 p의 값이 같아짐. 
		<< ", p[1] = " << p[1]				//p[1]을 출력.
		<< ", p[2] = " << p[2] << endl;		//p[2]을 출력.

	p[0] = 60;								//p의 첫번째 인덱스 값을 60으로 초기화, a 주소가 p에 저장, p값과 함께 a값도 바뀜.
	p[1] = 70;								//p의 두번째 인덱스 값을 70으로 초기화
	p[2] = 80;								//p의 세번째 인덱스 값을 80으로 초기화

	cout << "a[0] = " << a[0]				//a[0]을 출력.
		<< ", a[1] = " << a[1]				//a[1]을 출력.
		<< ", a[2] = " << a[2] << endl;		//a[2]을 출력.
	cout << "p[0] = " << p[0]				//p[0]을 출력, a의 주소가 p에 저장, a의 값과 p의 값이 같아짐. 
		<< ", p[1] = " << p[1]				//p[1]을 출력.
		<< ", p[2] = " << p[2] << endl;		//p[2]을 출력.

	return 0;								//int main이기 때문에 정수(0)을 반환해줌.
}