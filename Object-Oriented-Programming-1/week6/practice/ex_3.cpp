#include <iostream>
using namespace std;

int check(int ch);

void main() {

	int i = 60;				//main함수에서 사용할 변수
	int c = check(i);		//i를 check라는 함수의 input 사용하고 나온 output을 c에 할당
	cout << c << endl;		//c값 출력
}

int check(int ch) {
	if (ch >= 45)			//input이 45보다 크면
		return 100;			//100 리턴
	else					//아니라면
		return 10;			//10 리턴

}