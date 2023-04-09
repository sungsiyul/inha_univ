#include<iostream>
using namespace std;

constexpr int SIZE = 3;	//배열의 크기로 사용


struct student {		//student 구조체 선언
	int number;
	char name[20];
	double height;
};

void main() {
	struct student list[SIZE];		//student 구조체를 사용하여 총 3개의 정보

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the student ID : ";
		cin >> list[i].number;
		cout << "Enter the name : ";
		cin >> list[i].name;
		cout << "Enter the height : ";
		cin >> list[i].height;
		cout << endl;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "SID : " << list[i].number << " / ";
		cout << "Name : " << list[i].name << " / ";
		cout << "Height : " << list[i].height << "\n";
	}

}