#include<iostream>
using namespace std;

//#define STUDENTS 5;
constexpr int STUDENTS = 5; //전역변수 선언할 때 이렇게 해야 안전하게 가능

int main() {
	int grade[STUDENTS];
	int sum = 0;
	

	for (int i = 0; i < STUDENTS ; i++) {
		cout << i + 1 << "번째 학생의 점수 : ";
		cin >> grade[i];
		sum += grade[i];
		
	}

	float average = float(sum) / STUDENTS ;	//int로 하면 중간에 짤릴 수 있음.입력값은 정수로 받고 출력은 소수점으로 하고 싶을 때!
										//average만 float으로 한다고 안됨. 나누는 수 중에 소수점이 있어야함.
	cout << "평균 : " << average;

	return 0;

}