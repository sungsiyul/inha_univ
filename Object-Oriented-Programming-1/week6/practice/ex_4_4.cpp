//argument도 없고 return은 없는

#include <iostream>
using namespace std;

void message();		//message함수 프로토타입

void main() {
	message();		//message함수 call
}

void message() {	//message함수 정의
	cout << "Praise worthy and C worthy are synonyms" << endl;	//출력문
}