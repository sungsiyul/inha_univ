#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int grade[10];	//10자리 배열 선언
	int i;
	for (i = 0; i < 10; i++) {		//0~9, i++
		grade[i] = 0;				//grade[0] ~ grade[9]에 0 넣어주기
	}

	cout << "================" << "\n";
	cout << "  INDEX VALUE " << "\n";
	cout << "================" << "\n";

	for (int j = 0; j < 10; j++) {	//0~9 j++, 지역변수는 중괄호 밖에서 수명 X
		cout << setw(5) << j << setw(5) << grade[j] << "\n";	
	}

	return 0;

}