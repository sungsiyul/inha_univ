#ifndef DVD_H							//만약 DVD.h가 선언 되어있지 않다면 endif까지 실행해라.
#define DVD_H							//DVD.h 정의

#include "Media.h"						//Media.h 헤더파일 내에 선언된 멤버 사용 가능

class DVD: public Media {				//DVD라는 이름의 class 선언, Media를 부모로 가지는 상속관계

private:								//접근 지정자 private
	string license;						//자격번호를 string형 변수 license으로 선언

public:									//접근 지정자 public
	DVD(string=" ", int=0, string=" ");	//DVD class의 생성자, default값 존재
	~DVD();								//DVD class의 소멸자
	void setLicense(string);			//setLicense함수 선언
	string getLicense();				//getLicense함수 선언
	void play();						//play함수 선언
};										//class 선언이 마무리될 때 반드시 ; 붙이기

#endif									//DVD.h가 선언되어 있다면 모두 건너뛰고 바로 endif로 가서 종료.
