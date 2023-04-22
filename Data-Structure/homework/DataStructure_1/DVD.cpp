#include<iostream>		//iostream 라이브러리 포함
using std::cout;		//iostream 라이브러리 중 cout 사용 가능

#include"DVD.h"			//DVD.h의 기능 사용 가능.

DVD::DVD(string tit, int len, string lic) : Media(tit, len) {	//DVD 클래스의 생성자 정의. 상속된 값을 초기화기를 통해 부모클래스의 변수를 초기화함.
	setLicense(lic);											//parameter로 넘겨받은 lic값을 setLicense함수의 argument로 사용하여 넘김
	cout << "DVD object constructor for [ " << title << " ]\n";	//출력문 출력
}

DVD::~DVD() {													//DVD 클래스의 소멸자
	cout << "DVD object destructor for [ " << title << " ]\n";	//출력문 출력, 상속을 받았기 때문에 title 사용 가능
}

void DVD::setLicense(string lic) {		//DVD 클래스의 setLicense 함수, string형 변수 lic을 parameter로 하고 반환형 없음.
	license = lic;						//parameter로 넘겨받은 lic 값으로 private에 있는 license의 값 지정.
}

string DVD::getLicense() { return license; }	//DVD 클래스의 getLicense 함수, private에 있는 license를 반환해줌.

void DVD::play() {								//DVD 클래스의 play 함수, parameter와 반환형 둘다 없음.
	cout << "DVD가 play되고 있습니다.\n";		//출력문 출력
}
