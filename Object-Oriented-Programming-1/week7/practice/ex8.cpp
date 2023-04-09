#include<iostream>
using namespace std;

int main() {
	int grade[] = { 1,2,3,4,5,6 };

	int size = sizeof(grade) / sizeof(grade[0]);
	cout << "배열 한 칸의 크기 : " << sizeof(grade[0]) << "byte \n";

	for (int i = 0; i < size; i++)
		cout << grade[i] ;

	cout << endl;
	cout << "배열의 값 개수 : " << size << endl;

	return 0;
}