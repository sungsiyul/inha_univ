#include<iostream>
using namespace std;

void main() {
	int ch = 65; // a = 97, b =98 , a + b = 195

	switch (ch) {	//ch에 따라
	case 'a':		// a이면
					// 아무것도 안함
		break;
	case 'b':		// b이면
		cout << "You entered b " << endl;	//You entered b 출력
		break;
	case 'A':		// A이면
		cout << "a as in ashar" << endl;	//a as in ashar 출력
		break;
	case 'b' + 'a':	// b + a 이면 (195이면)
		cout << "You entered a and b" << endl;	//You entered a and b 출력

	}

}