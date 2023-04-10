#include <iostream>			//iostream 라이브러리에 있는 함수를 포함.
using std::cin;				//cin 함수 사용 가능
using std::cout;			//cout 함수 사용 가능
using std::endl;			//endl 함수 사용 가능

#include "Complex.h";		//Complex.h의 public 멤버 사용 가능.

int main() {				//main함수, 반환형이 int이기 때문에 메인함수의 끝에 return 0을 붙여줌
	double a, b;			//정수형 변수 a를 실수로, b를 허수로 받음.
	char PlusorMinus;		//두 값을 더할지 뺄지 입력하기 위해 char형 변수 PlusorMinus 선언.
	Complex result;			//기본값 0 0 들어감.

	cout << "두 복소수 (a + bi)의 덧셈과 뺄셈\n";	//출력문 출력
	
	cout << "a1, b1를 입력하시오.\n";	//a와 b를 입력받기 위한 안내문 출력
	cin >> a >>  b;						//a와 b의 값을 사용자에게 입력 받음
	Complex input1(a, b);				//a와 b값을 Complex 클래스로 생성한 input1객체로 넘겨줌.

	cout << "a2, b2를 입력하시오.\n";	//두번째 a값과 b값을 받음
	cin >> a >> b;						//a와 b의 값을 새롭게 초기화해줌.
	Complex input2(a, b);				//새롭게 생성한 a와 b값을 Complex 클래스로 생성한 input2객체로 넘겨줌.
	
	cout << "+ or - ?\n";				//덧셈을 할지 뺄셈을 할지 정하기 위한 안내문 출력
	cin >> PlusorMinus;					//덧셈 혹은 뺄셈 입력.
	
	cout << endl;						//줄바꿈 출력

	if (PlusorMinus == '+') {			//만약 덧셈을 하기위해 +를 입력했다면
		result.plus(input1, input2);	//input1과 input2를 더해줄 plus함수를 호출함.
	}
	else if (PlusorMinus == '-') {		//만약 뺄셈을 하기위해 -를 입력했다면
		result.minus(input1, input2);	//input1과 input2를 빼줄 minus함수를 호출함.
	}
	else{								//두가지 둘다 입력하지 않았다면
		cout << "only + or - !";		//오류메세지를 출력함.
	}

	return 0;			//main함수의 반환형이 int이므로 return 0을 붙여줌
}