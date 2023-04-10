#ifndef COMPLEX_H						//만약 Complex.h가 정의되어있지 않다면 #endif전까지 실행하라.
#define COMPLEX_H						//Complex.h 정의

class Complex {							//Complex라는 클래스 생성

private:								//접근 지정자 private
	double realNumber;										//객체의 실수
	double imgNumber;										//객체의 허수

public:									//접근 지정자 public
	Complex(double = 0, double = 0);						//객체 생성시 값 지정 안해도 모든 private의 변수를 0으로 초기화하는 default constructure.
	~Complex();												//소멸자
	void plus(Complex, Complex);							//1번함수 : 두 복소수 더하기
	void minus(Complex, Complex);							//2번함수 : 두 복소수 빼기
	void commatypePrint(char, Complex, Complex, Complex);	//3번함수 : (a, b)형식으로 복소수를 출력하기
	void equationtypePrint(char, Complex, Complex, Complex);//4번함수 : a + bi 형식으로 복소수를 출력하기
};	//클래스 정의를 마칠 때 세미콜론 붙임.

#endif COMPLEX_H						//중복 정의가 됐을 때 바로 이 라인으로 와서 실행을 종료함.