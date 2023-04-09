#include <iostream>										//include the stdio header file
using namespace std;									//std를 안써도 cin, cout을 사용할 수 있게 함.

struct student {										//student라는 구조체 생성
	int number;											//정수형 변수 number 생성
	char name[10];										//10개짜리 문자형 변수 name생성
	double height;										//실수형 변수 height 생성
	struct student* next;								//student라는 형태의 포인터 변수 next 생성.
};

int main() {											//main함수 선언, return값이 정수여야함.

	struct student s1 = { 30, "Kim", 167.2, NULL };		//student 형태의 변수 s1을 생성, 값을 입력함. next는 널값
	struct student s2 = { 31, "Park", 179.1, NULL };	//student 형태의 변수 s2을 생성, 값을 입력함. next는 널값
	struct student* first = NULL;						//student 형태의 포인터 변수 first를 생성하고 널값으로 초기화
	struct student* current = NULL;						//student 형태의 포인터 변수 current를 생성하고 널값으로 초기화

	first = &s1;										//s1의 주소값을 first에 저장
	s1.next = &s2;										//s2의 주소값을 s1.next에 저장
	s2.next = NULL;										//널값을 s2.next에 저장

	current = first;									//first에 저장된 주소값(&s1)을 current에 저장.
	while (current != NULL) {							//반복문 while 실행. current가 널값이 아닐 때까지 반복.
		cout << "SID = " << current->number				//current의 number를 출력
			 << ", Name = " << current->name			//current의 name을 출력
			 << ", Height = " << current->height << endl;//current의 height를 출력
		current = current->next;						//current의 next에 저장되어있던 주소값(or 널값)을 current에 저장.
	}

	return 0;											//int main이기 때문에 정수(0)을 반환해줌.
}