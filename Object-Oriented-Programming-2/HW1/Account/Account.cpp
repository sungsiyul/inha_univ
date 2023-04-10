//class에 대한 세부설명이 적혀있는 source file.
#include<iostream>	//iostream를 사용 가능하게 함.
using std::cin;		//iostream의 기능 중 cin기능을 사용하게 함.
using std::cout;	//iostream의 기능 중 cout기능을 사용하게 함.
using std::endl;	//iostream의 기능 중 endl기능을 사용하게 함.

#include "Account.h"	//헤더파일 "Account.h"를 사용 가능하게 함.

Account::Account(int num, int bal) {	//생성자, parameter는 정수형 변수 2개(num, bal)
	setAccount(bal);					//bal값을 setAccount함수로 보냄
	number = num;						//넘겨받은 num값을 number에 대입.
}

void Account::setAccount(int bal) {		//set함수, 생성자에서 넘겨받은 bal값을 함수 내부에서 사용되는 bal에 대입, return 값 없음.
	if (bal >= 0)	balance = bal;		//조건문 if, 만약 bal이 0보다 크거나 같을 때, bal 값을 balance에 대입.
	else {								//그렇지 않다면
		balance = 0;					//balance에 0을 대입하고
		cout << "오류 : 초기잔액이 0보다 작습니다.\n"; // 오류메세지 출력.
	}
}

void Account::credit(){																				//credit함수 선언, return 값 없음.
	int certain;																					//정수형 변수 certain 생성.
	cout << "\nEnter certain amount for account" << number << " : ";								//Enter certain amount for account를 출력하고 뒤에 number을 붙여줌
	cin >> certain;																					//사용자가 certain 값 입력.
	cout << "\nattempting to addition " << certain << " from account" << number << " balance\n";	//해당 문장을 출력하고 사용자가 입력한 certain값도 출력함.
	balance = balance + certain;																	//balance의 값에 입력한 certain 값을 더해줘서 balance의 값을 업데이트함.
}

void Account::debit() {																			//debit함수 선언, return 값 없음.
	int deb;																					//정수형 변수 deb 생성.
	cout <<"\nEnter withdrawal amount for account" << number << " : ";							////Enter withdrawal amount for account를 출력하고 뒤에 number을 붙여줌
	cin >> deb;																					//사용자가 deb 값 입력.
	cout << "\nattempting to subtract " << deb << " from account" << number << " balance\n";	//해당 문장을 출력하고 사용자가 입력한 deb값도 출력함.

	if(deb <= balance){										//조건문 if, 만약 deb값이 balance보다 작거나 같다면
		balance = balance - deb;							//balance - deb 값을 balance 대입하여 값을 업데이트함.
	}
	else{													//그렇지 않다면
		balance = balance;									//값을 그대로 유지하고
		cout << "\nDebit amount exceeded account balace\n";	//오류메세지 출력
	}
}

void Account::getBalance() {											//getBalance함수 선언, return 값 없음.
	cout << "account" << number << " balance: $" << balance << endl;	//Account의 순서와 함께 잔액을 출력.
}
