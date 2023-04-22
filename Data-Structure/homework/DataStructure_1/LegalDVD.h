#ifndef LEGALDVD_H							//만약 LegalDVD.h가 선언 되어있지 않다면 endif까지 실행해라.
#define LEGALDVD_H							//LegalDVD.h 정의

#include "DVD.h"							//DVD.h 헤더파일 내에 선언된 멤버 사용 가능

class LegalDVD: public DVD {				//LegalDVD라는 이름의 class 선언, DVD를 부모로 가지는 상속관계

private:									//접근 지정자 private
	string copyright;						//저작권을 string형 변수 copyright로 선언

public:										//접근 지정자 public
	LegalDVD(string=" ", int=0, string=" ", string=" ");//LegalDVD class의 생성자, default값 존재
	~LegalDVD();							//LegalDVD class의 소멸자
	void setCopyright(string);				//setCopyright함수 선언
	string getCopyright();					//getCopyright함수 선언
	void play();							//play함수 선언
};											//class 선언이 마무리될 때 반드시 ; 붙이기

#endif // !LEGALDVD_H						//LegalDVD.h가 선언되어 있다면 모두 건너뛰고 바로 endif로 가서 종료.
