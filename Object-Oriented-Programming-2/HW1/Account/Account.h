#ifndef ACCOUNT_H	//만약 ACCOUNT_H가 선언 되어있지 않다면 아래를 실행하고, 선언되어있다면 #endif로 간다.
#define ACCOUNT_H	//헤더파일인 account.h를 사용.

class Account {		//Account라는 이름의 class(설계도)를 만든다.
private:			//주로 멤버 변수 선언.
	int balance;	//balance라는 정수형 변수 선언. 잔액을 나타냄.
	int number;		//number라는 정수형 변수 선언. Account 뒤에 번호를 붙여줌.

public:						//주로 생성자, 소멸자, 멤버 함수 선언
	Account(int, int);		//생성자 선언, 2개의 parameters가 있음.
	void setAccount(int);	//값을 수정할 수 있는 set함수.
	void credit();			//credit함수의 prototype
	void debit();			//debit함수의 prototype
	void getBalance();		//getBalance함수의 prototype
};

#endif	//#ifdef에서 헤더파일이 이미 선언되어있다면 함수가 바로 여기로 와서 종료됨.