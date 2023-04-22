#include<iostream>	//iostream 라이브러리 포함
using std::cout;	//iostream 라이브러리 중 cout 사용 가능

#include "Media.h"	//Media.h의 기능 사용 가능.

Media::Media(string tit, int len){	//Media 클래스의 생성자 정의
	setTitle(tit);					//parameter로 넘겨받은 tit값을 setTitle함수의 argument로 사용하여 넘김
	setLength(len);					//parameter로 넘겨받은 len값을 setLength함수의 argument로 사용하여 넘김
	count++;						//count = count + 1
	cout << "Media object constructor for [ " << title << " ]\n";	//출력문 출력
}

Media::~Media() {					//Media 클래스의 소멸자
	cout << "Media object destructor for [ " << title << " ]\n";	//출력문 출력
}

void Media::setLength(int len) {	//Media 클래스의 setLength 함수, int형 변수 len을 parameter로 하고 반환형 없음.
	length = len;					//parameter로 넘겨받은 len 값으로 private에 있는 length의 값 지정.
}

void Media::setTitle(string tit) {	//Media 클래스의 setTitle 함수, string형 변수 tit을 parameter로 하고 반환형 없음.
	title = tit;					//parameter로 넘겨받은 tit 값으로 private에 있는 title의 값 지정.
}

string Media::getTitle() { return title; }	//Media 클래스의 getTitle 함수, private에 있는 title을 반환해줌.

int Media::getLength() { return length; }	//Media 클래스의 getTitle 함수, private에 있는 title을 반환해줌.

void Media::play() {						//Media 클래스의 play 함수, parameter와 반환형 둘다 없음.
	cout << "Media가 play되고 있습니다.\n";	//출력문 출력
}

Media* Media::operator+(Media* val) {			//+ 연산자 오버로딩
	int newLength;								//int형 변수 newLength 선언
	newLength = length + val->length;			//newLength = mp[1]의 length + mp[2]의 length

	Media* newmp = new Media("new", newLength);	//포인터객체 newmp 동적 할당, title = "new", length = newLength

	return newmp;								//newmp 반환
}

Media* Media::operator=(Media* m) {		// =(대입) 연산자 오버로딩
	if (this == m) {					//조건문 if. 만약 mp[3]가 newmp와 같다면
		return this;					//mp[3]가 가르키고 있는 값을 return.
	}			

	this->length = m->length;			//mp[3]의 length = newmp의 length
	delete m;							//heap 공간의 newmp를 delete
	return this;						//this(mp[3]) 반환
}