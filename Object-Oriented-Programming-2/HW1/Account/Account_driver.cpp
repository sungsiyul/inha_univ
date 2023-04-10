//실제 main함수가 포함된 driver.file
#include<iostream>		//iostream를 사용 가능하게 함.
using std::cin;			//iostream의 기능 중 cin기능을 사용하게 함.
using std::cout;		//iostream의 기능 중 cout기능을 사용하게 함.
using std::endl;		//iostream의 기능 중 endl기능을 사용하게 함.

#include "Account.h";	//헤더파일 "Account.h"를 사용 가능하게 함.

int main() {			//main함수, return type 정수형
	Account a1(1, 50);	//Account를 활용해 a1이라는 객체 생성
	Account a2(2, 25);	//Account를 활용해 a1이라는 객체 생성

	a1.getBalance();	//a1의 getBalance함수 호출
	a2.getBalance();	//a2의 getBalance함수 호출
	a1.debit();			//a1의 debit함수 호출
	cout << endl;		//줄바꿈 출력
	a1.getBalance();	//a1의 getBalance함수 호출
	a2.getBalance();	//a2의 getBalance함수 호출
	a2.debit();			//a2의 debit함수 호출
	cout << endl;		//줄바꿈 출력
	a1.getBalance();	//a1의 getBalance함수 호출
	a2.getBalance();	//a2의 getBalance함수 호출
	a2.credit();		//a2의 credit함수 호출
	cout << endl;		//줄바꿈 출력
	a1.getBalance();	//a1의 getBalance함수 호출
	a2.getBalance();	//a2의 credit함수 호출

	return 0;			//int형으로 반환해야하기 때문에 return 0을 넘겨줌.
}