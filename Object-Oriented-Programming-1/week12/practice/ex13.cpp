#include <iostream>									//include the stdio header file
using namespace std;								//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

struct date {										//date��� ����ü ����
	int month;										//������ ���� month ����
	int day;										//������ ���� day ����
	int year;										//������ ���� year ����		
};
struct student {									//student��� ����ü ����
	int number;										//������ ���� number ����
	char name[20];									//20ĭ¥�� ������ �迭 name ����
	double height;									//�Ǽ��� ���� height ����
	struct date* dob;								//������ ���� date��� ������ ������ ���� dob ����
};

int main() {										//main�Լ� ����, return���� ����������.

	struct date d = { 3,20,1980 };					//date��� ������ ���� d�� �����ϰ� ���� �ʱ�ȭ.
	struct student s = { 20070001, "Kim", 180.2 };	//student��� ������ ���� s�� �����ϰ� ���� �ʱ�ȭ.

	s.dob = &d;										//���� s�� �׸� �� dob�� d�� �ּҰ��� ����.

	cout << "SID : " << s.number << endl;			//s�� number�� ���
	cout << "Name : " << s.name << endl;			//s�� name�� ���
	cout << "Height : " << s.height << endl;		//s�� height�� ���
	cout << "Bday : "
		 << s.dob->year << ". "
		 << s.dob->month << ". "
		 << s.dob->day;								//s.dob �� d�� �ּҰ��� �ִ� year��, month��, day���� ���

	return 0;										//int main�̱� ������ ����(0)�� ��ȯ����.
}