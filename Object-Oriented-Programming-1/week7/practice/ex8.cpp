#include<iostream>
using namespace std;

int main() {
	int grade[] = { 1,2,3,4,5,6 };

	int size = sizeof(grade) / sizeof(grade[0]);
	cout << "�迭 �� ĭ�� ũ�� : " << sizeof(grade[0]) << "byte \n";

	for (int i = 0; i < size; i++)
		cout << grade[i] ;

	cout << endl;
	cout << "�迭�� �� ���� : " << size << endl;

	return 0;
}