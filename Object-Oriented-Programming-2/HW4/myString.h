#pragma once			//헤더파일 중복정의 방지
#include <iostream>		//ostream, istream 사용을 위해 iostream 라이브러리를 사용
using namespace std;	//위 라이브러리의 기능을 사용할 때 앞에 std:: 생략 가능

class myString {
	friend ostream& operator<<(ostream& output, const myString&);	//friend함수를 통해 <<연산자 오버로딩 함수에서도 myString의 멤버 사용 가능
	friend istream& operator>>(istream& input, myString&);			//friend함수를 통해 >>연산자 오버로딩 함수에서도 myString의 멤버 사용 가능
private:
	char* str;
	int length;
public:
	myString(int);
	myString(const myString&);
	~myString();
	//set function
	void setString(int, char*);
	//concatenate
	myString operator+(myString&);
	//copy
	void operator=(myString&);
	//comparison
	bool operator==(myString&);
	bool operator!=(myString& operand);
	//index-based approaching
	char operator[](int);
	void printString();
};