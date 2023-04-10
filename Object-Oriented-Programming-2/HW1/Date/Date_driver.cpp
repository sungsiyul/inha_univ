//실제 main함수가 포함된 driver.file
#include<iostream>	//iostream를 사용 가능하게 함.
using std::cin;		//iostream의 기능 중 cin기능을 사용하게 함.
using std::cout;	//iostream의 기능 중 cout기능을 사용하게 함.
using std::endl;	//iostream의 기능 중 endl기능을 사용하게 함.

#include"Date.h"	//헤더파일 "Date.h"를 사용 가능하게 함.

int main() {		//main함수, return type 정수형
	
	int mo, da, ye;					//정수형 변수 mo, da, ye 선언
	cout << "Month : ";				//"Month : " 출력
	cin >> mo;						//mo값 입력
	cout << "Day : ";				//"Month : " 출력
	cin >> da;						//mo값 입력
	cout << "year : ";				//"Month : " 출력
	cin >> ye;						//mo값 입력
	Date d1(mo, da, ye);			//Date를 활용해 d1이라는 객체 생성
	cout << "\nOriginal Date :\n";	//Original Date :출력, \n자리에 줄바꿈 출력
	d1.displayDate();				//d1의 dispayDate() 함수 호출
	d1.setMonth(1);					//d1의 setMonth함수 호출, 1 값을 넘겨줌
	d1.setDay(1);					//d1의 setDay함수 호출, 1 값을 넘겨줌
	d1.setYear(2005);				//d1의 setYear함수 호출, 2005 값을 넘겨줌
	cout << "\nNew Date :\n";		//New Date :출력, \n자리에 줄바꿈 출력
	d1.displayDate();				//d1의 dispayDate() 함수 호출
	

	cout << "\nget함수를 활용한 출력\n"											//해당 문장 출력
		<< d1.getMonth() << " / " << d1.getDay() << " / " << d1.getYear();		//get함수를 활용해 M/D/YYYY 출력
	
	return 0;						//int형으로 반환해야하기 때문에 return 0을 넘겨줌.
}