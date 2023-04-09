//argument는 없고 return만 있는

#include <iostream>
using namespace std;

int message();

void main() {
	int a = message();	//선언과 동시에 지정 가능(C++)
	cout << a;			//return 0이기 때문에 a에 0이 들어가서 0 출력
}

int message() {			//message 함수 정의
	cout << endl << "Viruses are written in C";	//출력문
	return 0;			// 0 값 반환
}