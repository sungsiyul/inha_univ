#include <iostream>
using namespace std;

void display();	//display 함수 프로토타입 설정

int main() {	
	cout << "Only stupides use C?" << endl;	//main 출력문
	display();		//display 함수 실행

	return 0;
}

void display() {
	cout << "Fools too use C!" << endl;		//display 출력문
	main();			//main함수가 다시 call

}