#include <iostream>									//include the stdio header file
using namespace std;								//std를 안써도 cin, cout을 사용할 수 있게 함.

struct date {										//date라는 구조체 생성
	int month;										//정수형 변수 month 생성
	int day;										//정수형 변수 day 생성
	int year;										//정수형 변수 year 생성		
};
struct student {									//student라는 구조체 생성
	int number;										//정수형 변수 number 생성
	char name[20];									//20칸짜리 문자형 배열 name 생성
	double height;									//실수형 변수 height 생성
	struct date* dob;								//위에서 만든 date라는 형태의 포인터 변수 dob 생성
};

int main() {										//main함수 선언, return값이 정수여야함.

	struct date d = { 3,20,1980 };					//date라는 형태의 변수 d를 생성하고 값을 초기화.
	struct student s = { 20070001, "Kim", 180.2 };	//student라는 형태의 변수 s를 생성하고 값을 초기화.

	s.dob = &d;										//변수 s의 항목 중 dob에 d의 주소값을 저장.

	cout << "SID : " << s.number << endl;			//s의 number를 출력
	cout << "Name : " << s.name << endl;			//s의 name을 출력
	cout << "Height : " << s.height << endl;		//s의 height를 출력
	cout << "Bday : "
		 << s.dob->year << ". "
		 << s.dob->month << ". "
		 << s.dob->day;								//s.dob 즉 d의 주소값에 있는 year값, month값, day값을 출력

	return 0;										//int main이기 때문에 정수(0)을 반환해줌.
}