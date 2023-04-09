#include <iostream>									//include the stdio header file
using namespace std;								//std를 안써도 cin, cout을 사용할 수 있게 함.

struct student {									//student 구조체 생성
	int number;										//정수형 변수 number 생성
	char name[20];									//20칸짜리 문자형 배열 name 생성	
	double height;									//실수형 변수 height 생성
};

int main() {										//main함수 선언, return값이 정수여야함.
	struct student s = { 20070001, "홍길동", 180.2 };//student라는 type의 변수 s를 생성, 값을 초기화해줌.
	struct student* p;								//student라는 type의 포인터 변수 p를 생성.

	p = &s;											//s의 주소를 p에 저장.

	cout << "학번 = " << s.number << ", 이름 = " << s.name << ", 키 = " << s.height << endl;			//s의 값들을 출력
	cout << "학번 = " << (*p).number << ", 이름 = " << (*p).name << ", 키 = " << (*p).height << endl;	//*p의 값들을 출력
	cout << "학번 = " << p->number << ", 이름 = " << p->name << ", 키 = " << p->height << endl;			//p주소에 있는 값출력.
	return 0;										//int main이기 때문에 정수(0)을 반환해줌.
}