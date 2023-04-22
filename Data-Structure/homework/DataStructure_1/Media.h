#ifndef MEDIA_H				//만약 media.h가 선언 되어있지 않다면 endif까지 실행해라.
#define MEDIA_H				//media.h 정의

#include<iostream>			//iostream 라이브러리 포함
#include<string>			//string 라이브러리 포함
using namespace std;		//#include한 두개의 라이브러리의 기능 모두 사용가능.

class Media {				//Media라는 이름의 class 선언

private:					//접근 지정자 private
	int length;				//길이를 int형 변수 length로 선언

protected:					//접근지정자 protected
	string title;			//생성자와 소멸자에서 어느 객체가 삭제됐는지 알아보기 쉽게 자식class에서도 title 사용.

public:						//접근지정자 public
	static int count;		//static 정수형 변수 count 선언

	Media(string=" ", int=0);//Media class의 생성자, default값 존재
	virtual ~Media();		//가상함수 virtual 사용, Media class의 소멸자
	void setLength(int);	//setLength함수 선언
	void setTitle(string);	//setTitle함수 선언
	int getLength();		//getLength함수 선언
	string getTitle();		//getTitle함수 선언
	virtual void play();	//가상함수 virtual 사용, play함수 선언
	friend ostream& operator<<(ostream&, Media&);		//<<연산자 오버로딩, friend 사용하여 Media에서 << 연산자에 접근

	Media* operator+(Media*);		//+ 연산자 오버로딩
	Media* operator=(Media*);		//= 연산자 오버로딩
};							//class 선언이 마무리될 때 반드시 ; 붙이기

#endif						//media.h가 선언되어 있다면 모두 건너뛰고 바로 endif로 가서 종료.