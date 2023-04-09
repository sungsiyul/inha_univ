#include<iostream>
using namespace std;

constexpr int STU_NUMBER = 1;
constexpr int REG_NUMBER = 2;

struct student {
	int type;
	union {
		int stu_number;
		char reg_number[25];
	}id;
	char name[20];
};

void print(student s) {
	switch (s.type) {
	case STU_NUMBER:
		cout << "SID : " << s.id.stu_number << endl;
		cout << "Name : " << s.name << endl;
		break;
	case REG_NUMBER:
		cout << "RID : " << s.id.reg_number << endl;
		cout << "Name : " << s.name << endl;
		break;
	default:
		cout << "type error" << endl;
		break;
	}
}

int main() {
	student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 12210000;
	strcpy_s(s1.name, "Hong");

	s2.type = REG_NUMBER;
	strcpy_s(s2.id.reg_number, "010319-30000000");
	strcpy_s(s2.name, "Kim");

	print(s1);
	print(s2);

	return 0;
}