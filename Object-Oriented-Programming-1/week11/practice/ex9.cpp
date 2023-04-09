#include<iostream>
using namespace std;

enum tvtype{LCD, LED, PDP, TD};				//처음에 숫자가 올 수 없는 규칙이 있음.

void main() {

	enum tvtype type;

	cout << "Enter the type of TV : ";
	//cin >> type; 이렇게 사용이 안됨.
	//scanf를 써야함
	scanf_s("%d", &type);					//입력을 PDP로 하면 문자 자체의 아스키코드로 인식해서
											//default값이 나오고 숫자 2를 입력해야함.
	//scanf를 사용하기 싫다면? 아래처럼
	//int input;
	//cin >> input;
	//type = static_cast<tvtype>(input)

	switch (type) {
	case LCD:
		cout << "LCD TV" << endl;
		break;
	case LED:
		cout << "LED TV" << endl;
		break;
	case PDP:
		cout << "PDP TV" << endl;
		break;
	case TD:
		cout << "TD TV" << endl;
		break;
	}
}