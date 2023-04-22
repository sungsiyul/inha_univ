#include<iostream>		//iostream 라이브러리 포함
using std::cout;		//iostream 라이브러리 중 cout 사용 가능

#include "VTR.h"		//VTR.h의 기능 사용 가능.

VTR::VTR(string tit, int len, string formatVideo) : Media(tit, len) {		//VTR 클래스의 생성자 정의. 상속된 값을 초기화기를 통해 부모클래스의 변수를 초기화함.
	setFormat(formatVideo);													//parameter로 넘겨받은 formatVideo값을 setFormat함수의 argument로 사용하여 넘김
	cout << "VTR object constructor for [ " << title << " ]\n";				//출력문 출력
}

VTR::~VTR() {															//VTR 클래스의 소멸자
	cout << "VTR object destructor for [ " << title << " ]\n";			//출력문 출력, 상속을 받았기 때문에 title 사용 가능
}

void VTR::setFormat(string formatVideo) {			//VTR 클래스의 setFormat 함수, string형 변수 formatVideo을 parameter로 하고 반환형 없음.
	format = formatVideo;							//parameter로 넘겨받은 formatVideo 값으로 private에 있는 format의 값 지정.
}

string VTR::getFormat() { return format; }			//VTR 클래스의 getFormat 함수, private에 있는 format를 반환해줌.


void VTR::play(){									//VTR 클래스의 play 함수, parameter와 반환형 둘다 없음.
	cout << "VTR이 play되고 있습니다.\n";			//출력문 출력
}