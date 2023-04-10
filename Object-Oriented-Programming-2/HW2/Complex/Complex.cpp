#include <iostream>		//iostream 라이브러리에 있는 함수를 포함.
using std::cout;		//cout 함수 사용 가능

#include "Complex.h"	//Complex.h의 public 멤버 사용 가능.

Complex::Complex(double realNum, double imgNum):realNumber(realNum), imgNumber(imgNum) {	//생성자, 요구사항에 맞게 double형으로 변수를 받음, member initializer을 통해 private의 값을 객체 생성과 동시에 초기화.
													//member initializer을 통해 값을 초기화 해줬기 때문에 set함수를 사용하지 않아도 됨.	

}

Complex::~Complex() {		//소멸자, parameter와 return 값 없음.
}

void Complex::plus(const Complex x, const Complex y) {	//두 복소수를 더해주는 함수, 넘겨받는 두 객체는 변동이 없으므로 const를 붙여줌
	Complex result;										//두 함수를 더해서 저장할 객체를 미리 생성함. 기본 생성자로 인해 result의 realNumber와 imgNumber에 0값이 초기화된다.
	result.realNumber = x.realNumber + y.realNumber;	//넘겨받은 객체의 실수부분(realNumber)을 더해서 result의 realNumber에 대입함.
	result.imgNumber = x.imgNumber + y.imgNumber;		//넘겨받은 객체의 실수부분(imgNumber)을 더해서 result의 imgNumber에 대입함.
	char plus = '+';									//나중에 출력할 때 +기호를 사용하기 위해 char형 변수 plus에 문자 '+'를 넣어줌
	commatypePrint(plus, x, y, result);					//(a,b)형태로 출력하는 함수, plus기호와, 덧셈 과정을 출력하기 위해 더해지는 복소수 x와 y 그리고 결과를 나타내는 result 객체까지 넘겨준다.
	equationtypePrint(plus, x, y, result);				//a+bi형태로 출력하는 함수,  plus기호와, 덧셈 과정을 출력하기 위해 더해지는 복소수 x와 y 그리고 결과를 나타내는 result 객체까지 넘겨준다.
}

void Complex::minus(const Complex x, const Complex y) {	//두 복소수를 빼주는 함수, 넘겨받는 두 객체는 변동이 없으므로 const를 붙여줌
	Complex result;										//앞의 복소수에서 뒤의 복소수를 빼서 나오는 값을 저장할 객체를 미리 생성함. 기본 생성자로 인해 result의 realNumber와 imgNumber에 0값이 초기화된다.
	result.realNumber = x.realNumber - y.realNumber;	//넘겨받은 객체의 실수부분(realNumber)을 빼서 result의 realNumber에 대입함.
	result.imgNumber = x.imgNumber - y.imgNumber;		//넘겨받은 객체의 실수부분(imgNumber)을 빼서 result의 imgNumber에 대입함.
	char minus = '-';									//나중에 출력할 때 -기호를 사용하기 위해 char형 변수 plus에 문자 '-'를 넣어줌
	commatypePrint(minus, x, y, result);				//(a,b)형태로 출력하는 함수, minus기호와, 뺄셈 과정을 출력하기 위해 복소수 x와 y 그리고 결과를 나타내는 result 객체까지 넘겨준다.
	equationtypePrint(minus, x, y, result);				//a+bi형태로 출력하는 함수, minus기호와, 뺄셈 과정을 출력하기 위해 복소수 x와 y 그리고 결과를 나타내는 result 객체까지 넘겨준다.
}

void Complex::commatypePrint(char plusorminus, Complex x, Complex y, Complex result) {	//(a,b)형태로 출력하는 함수. 기호와 계산의 대상이 되는 값 두개의 객체와 결과값의 객체를 넘겨받음
	cout << "(" << x.realNumber << ", " << x.imgNumber << ") " << plusorminus << " ("	//문제 조건에 맞게 출력.
		<< y.realNumber << ", " << y.imgNumber << ") = ("
		<< result.realNumber << ", " << result.imgNumber << ")\n";
}

void Complex::equationtypePrint(char plusorminus, Complex x, Complex y, Complex result) {	//a+bi형태로 출력, bi가 음수일 때는 -부호가 나오지만 양수일 때는 앞에 아무런 기호가 없기 때문에 조건문을 활용하여 +기호를 직접 붙여줌
	if (x.imgNumber >= 0){	//앞의 복소수의 허수가 양수일 때
		cout << x.realNumber << '+' << x.imgNumber << "i " << plusorminus << " ( ";;		//앞의 복소수의 허수부분이 출력될 때 앞에 + 기호를 붙여줌. plusorminus는 plus함수 혹은 minus함수에서 넘겨받은 기호를 출력함.
	}
	else{					//그렇지 않다면(음수일 때)
		cout << x.realNumber << x.imgNumber << "i " << plusorminus << " ( ";;				//따로 +부호를 붙이지 않음으로써 +와 -부호가 동시에 출력되지 않게함. plusorminus는 plus함수 혹은 minus함수에서 넘겨받은 기호를 출력함.
	}
	/////////////////////////////////////////////////////////////////////
	if (y.imgNumber >= 0) {	//뒤의 복소수의 허수가 양수일 때
		cout << y.realNumber << '+' << y.imgNumber << "i ) = ";								//뒤의 복소수의 허수부분이 출력될 때 앞에 + 기호를 붙여줌. plusorminus는 plus함수 혹은 minus함수에서 넘겨받은 기호를 출력함.
	}
	else{					//그렇지 않다면(음수일 때)
		cout << y.realNumber << y.imgNumber << "i ) = ";									//따로 +부호를 붙이지 않음으로써 +와 -부호가 동시에 출력되지 않게함. plusorminus는 plus함수 혹은 minus함수에서 넘겨받은 기호를 출력함.
	}
	/////////////////////////////////////////////////////////////////////
	if(result.imgNumber >= 0){	//결과값의 복소수의 허수가 양수일 때
		cout << result.realNumber << "+" << result.imgNumber << "i\n";						//결과값의 복소수의 허수부분이 출력될 때 앞에 + 기호를 붙여줌. plusorminus는 plus함수 혹은 minus함수에서 넘겨받은 기호를 출력함.
	}
	else{						//그렇지 않다면(음수일 때)
		cout << result.realNumber << result.imgNumber << "i\n";								//따로 +부호를 붙이지 않음으로써 +와 -부호가 동시에 출력되지 않게함. plusorminus는 plus함수 혹은 minus함수에서 넘겨받은 기호를 출력함.
	}
}

