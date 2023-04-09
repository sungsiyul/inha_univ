#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int grade[10] = { 31,63,62,87,14,25,92,70,75,53 };

	cout << "================" << "\n";
	cout << "  INDEX VALUE " << "\n";
	cout << "================" << "\n";

	for (int i = 0; i < 10; i++) {	//0~9 j++, 지역변수는 중괄호 밖에서 수명 X
		cout << setw(5) << i << setw(5) << grade[i] << "\n";
	}

	return 0;

}