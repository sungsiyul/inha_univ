#include<iostream>	//iostream 라이브러리 포함
using std::cout;	//iostream 라이브러리 중 cout 사용 가능
using std::endl;	//iostream 라이브러리 중 endl 사용 가능

#include "Media.h"	//Media.h의 기능 사용 가능.
#include "DVD.h"	//DVD.h의 기능 사용 가능.
#include "VTR.h"	//VTR.h의 기능 사용 가능.
#include "LegalDVD.h"//LegalDVD.h의 기능 사용 가능.

int Media::count = 0;		//static변수는 전역에서 초기화 함. 

ostream& operator<<(ostream& os, Media* m) {	//ostream클래스 내부에 정의할 수 없기 때문에 전역함수로 지정하고
	m->play();									//넘겨받은 mp[0]의 play 실행
	return os;									//ostream 내부의 os를 반환
}


int main(void) {			//main함수 실행, return type : int

	Media* mp[4];			//객체의 포인터 배열, 생성자 사용 시 new와 delete 반드시 해줘야 함.

	mp[0] = new VTR("Hello", 15, "avi");		//포인터 객체 배열 첫번째 칸에 heap 공간에 할당 된 VTR객체를 지정.
	mp[1] = new DVD("Superman", 3, "123-9899");	//포인터 객체 배열 두번째 칸에 heap 공간에 할당 된 DVD객체를 지정.
	mp[2] = new LegalDVD("Marvel", 10, "456-9899", "GG entertainment");	//포인터 객체 배열 세번째 칸에 heap 공간에 할당 된 LegalDVD객체를 지정.
	mp[3] = new VTR("Disney", 23, "mkv");		//포인터 객체 배열 네번째 칸에 heap 공간에 할당 된 VTR객체를 지정.

	cout << endl;								//즐바꿈문자 출력

	for (int i = 0; i < Media::count; i++) {	//반복문 for문, 정수 i는 0부터 Media::count(4)까지 1씩 증가하면서 아래 구문 반복
		mp[i]->play();							//mp[0] ~ mp[3]의 play함수 실행(다형성)
	}
	
	cout << "\n연산자 오버로딩 실습\n";	//출력문 출력

	cout << mp[0];						//<<연산자 오버로딩. 포인터 객체인 mp[0]을 받아 mp[0].play를 출력
	
	mp[3] = *mp[1] + mp[2];		//+ 연산자, =(대입) 연산자 오버로딩. 각자 객체의 형태를 활용하여 오버로딩 계산.
	cout << mp[3]->getLength() << endl;	// 13	//여기서 mp[3]는 여전히 VTR class의 객체가 아닌 Media class의 객체이다.
	
	cout << endl;

	for (int i = 3; i >= 0; i--){	//반복문 for문, 정수 i는 3부터 0까지 1씩 감소하하면서 아래 구문 반복
		delete mp[i];				//new로 인해 mp[0]~mp[3]까지 생성을 했으니 mp[3]~m[0]을 소멸시킴
	}

	cout << "\n성시열 12180626\n";	//학번 이름 출력
	return 0;						//main함수의 return type이 int이기 때문에 int인 0을 반환함.
}