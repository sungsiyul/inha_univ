#include <iostream>
#include <iomanip>
#include "myString.h"
using namespace std;

int main() {
	myString mystr1(50);
	myString mystr2(50);
	myString mystr3(50);

	cout << "================== >> operator overloading.... ==================" << endl;
	cin >> mystr1;	//>>연산자 오버로딩을 통해 문자열을 입력받음.
	cin >> mystr2;	//>>연산자 오버로딩을 통해 문자열을 입력받음.

	cout << "================== << operator overloading.... ==================" << endl;
	cout << mystr1;	//<<연산자 오버로딩을 통해 문자열을 출력함.
	cout << mystr2;	//<<연산자 오버로딩을 통해 문자열을 출력함.
	cout << endl;

	cout << "================== Check each str's informations ==================" << endl;
	mystr1.printString();	//myString 클래스의 printString()함수 호출하여 mystr1의 length와 str 출력
	mystr2.printString();	//myString 클래스의 printString()함수 호출하여 mystr2의 length와 str 출력
	cout << endl;

	cout << "================== Concatenate mystr2 to mystr1 ==================" << endl;
	myString concatenatedStr = mystr1 + mystr2;		//operator +를 사용하여 concatenatedStr에 두 객체의 length와 str(문자열)을 더해주고
													//복사생성자를 통해 그 더해준 객체를 concatenatedStr객체에 복사하여 대입한다.
	cout << concatenatedStr;						//<<연산자오버로딩을 통해 concatenatedStr객체의 문자열을 출력한다.
	cout << endl;


	cout << "================== Assign concatenatedStr to myStr3 ==================" << endl;
	mystr3 = concatenatedStr;	//copy(대입) 연산자 오버로딩을 사용하여 concatenatedStr객체를 mystr3이라는 객체에 대입한다.
								//위의 복사생성자와 다른 점은 생성과 동시에 대입하는 것이 아니라 이미 만들어진 객체에 대입하는 것이다.
	mystr3.printString();		//myString 클래스의 printString()함수 호출하여 mystr3의 length와 str 출력
	cout << endl;


	cout << "================== Compare concatenatedStr and myStr3 ==================" << endl;
	cout << (mystr3 == concatenatedStr) << endl;	//==연산자 오버로딩을 통해 copy(대입) 연산을 끝낸 두 객체가 같음을 나타낸다.
	cout << endl;

	cout << "================== Compare myStr3 and myStr1 ==================" << endl;
	cout << (mystr3 == mystr1) << endl;				//==연산자 오버로딩을 통해 두 객체가 다름을 나타낸다. 크기부터 다르다.
	cout << endl;

	cout << "================== Use [] to get a char element (index = 5, 20) ==================" << endl;
	cout << mystr3[5] << endl;		//mystr3의 5번째 인덱스의 값을 출력한다. (출력화면 상 6번째 글자)
	cout << mystr3[20] << endl;		//mystr3의 20번째 인덱스의 값을 출력한다. (출력화면 상 21번째 글자)
									//만약 값과 index를 초과할시 error메시지를 출력한다. null문자가 있는 index를 출력하면 아무것도 없으므로 아무것도 출력하지 않는다.
	return 0;	//main함수의 반환형이 int이므로 return 0;을 해준다.
}