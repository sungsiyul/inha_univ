#include <iostream>
using namespace std;

int main() {

	// ''와 ""의 차이 = ''는 한글자 ""는 문자열string 쓸 때 사용

	char code1 = 'A';
	char code2 = 65; // 숫자 65이지만 char로 선언 ==> 문자로 인식시킴(ASCII코드로)
	int code3 = 'A'; // 문자 'A'이지만 int로 선언 ==> 숫자로 인식시킴(ASCII코드로)
	char code4 = '65';	// 숫자이지만 65를 따옴표 안에 넣어주면서 문자로 인식시킴
						// char가 크기가 1바이트여서 '5'만 출력이 됨.

	cout << "character constant = " << code1 << "\n";
	cout << "ASCII 65 is " << code2 << "\n";
	cout << code3 << endl;
	cout << code4;

}