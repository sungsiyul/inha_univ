#include <iostream>			//iostream 라이브러리에 있는 함수를 포함.
using std::cout;			//cout 함수 사용 가능
using std::endl;			//endl 함수 사용 가능

#include "Time.h"			//Time.h의 public 멤버 사용 가능.

int main() {				//main함수, 반환형이 int이기 때문에 메인함수의 끝에 return 0을 붙여줌

	Time t1(9, 23, 58, 58);	//시작시간을 9일 오후 23시 58분 58초로 설정
	
	for(int i=0;;i++){		//1초 증가함수와 출력함수의 반복을 위해 for문 사용
		t1.tick();			//Time 클래스를 통해 만든 객체 t1의 tick 함수 호출
		t1.printStandard();	//Time 클래스를 통해 만든 객체 t1의 printStandard 함수 호출
		cout << endl;		//출바꿈 출력
		if (i == 70) break;	//모든 조건이 만족하는지 확인하기 위해 어림잡아 70번 실행
	}

	return 0;				//main함수의 반환형이 int이므로 return 0을 붙여줌
}