#include<iostream>
using namespace std;

//#define STUDENTS 5;
constexpr int STUDENTS = 5; //�������� ������ �� �̷��� �ؾ� �����ϰ� ����

int main() {
	int grade[STUDENTS];
	int sum = 0;
	

	for (int i = 0; i < STUDENTS ; i++) {
		cout << i + 1 << "��° �л��� ���� : ";
		cin >> grade[i];
		sum += grade[i];
		
	}

	float average = float(sum) / STUDENTS ;	//int�� �ϸ� �߰��� ©�� �� ����.�Է°��� ������ �ް� ����� �Ҽ������� �ϰ� ���� ��!
										//average�� float���� �Ѵٰ� �ȵ�. ������ �� �߿� �Ҽ����� �־����.
	cout << "��� : " << average;

	return 0;

}