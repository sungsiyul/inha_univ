#include<iostream>			//iostream 라이브러리 포함
using std::cout;			//iostream 라이브러리 중 cout 사용 가능

#include "LegalDVD.h"		//LegalDVD.h의 기능 사용 가능.

LegalDVD::LegalDVD(string tit, int len, string lic, string cop):DVD(tit,len,lic) {	//LegalDVD 클래스의 생성자 정의. 상속된 값을 초기화기를 통해 부모클래스의 변수를 초기화함.
	setCopyright(cop);																//parameter로 넘겨받은 cop값을 setCopyright함수의 argument로 사용하여 넘김
	cout << "LegalDVD object constructor for [ " << title << " ]\n";				//출력문 출력
}

LegalDVD::~LegalDVD() {														//LegalDVD 클래스의 소멸자
	cout << "LegalDVD object destructor for [ " << title << " ]\n";			//출력문 출력, 상속을 받았기 때문에 title 사용 가능
}

void LegalDVD::setCopyright(string cop) {					//LegalDVD 클래스의 setCopyright 함수, string형 변수 cop을 parameter로 하고 반환형 없음.
	copyright = cop;										//parameter로 넘겨받은 cop 값으로 private에 있는 copyright의 값 지정.
}

string LegalDVD::getCopyright() { return copyright; }		//LegalDVD 클래스의 getCopyright 함수, private에 있는 copyright를 반환해줌.

void LegalDVD::play() {										//LegalDVD 클래스의 play 함수, parameter와 반환형 둘다 없음.
	cout << "LegalDVD가 play되고 있습니다.\n";				//출력문 출력
}