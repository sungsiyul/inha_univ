#include<iostream>
#include<string.h>
#include<cstring>		//string�̶�� data type�� ����ϱ� ���� ��. c++������ std������ ����� �����ϱ� ������ iostream �ϳ��� �־ ��.
using namespace std;

struct student {		//student ����ü ����
	int number;			//�й� ���� ����
	string name;		//�̸� ����
	//using namespace�� ����ؼ� std::string ��. �̰Ŷ����� 18�� ���ο��� ������ ��
	double height;		//Ű ���� ����
};

void main() {
	//struct student s;	//�� �κ��� ���� ����
	student s;

	s.number = 12210000;		// s�л� �й� 12210000
	//strcpy(s.name, "�����");	// s�л� �̸� �����
								// strcpy�� ���

	//copy(s.name.begin(), s.name.end(), "�����");
	//21�� ����ó���� ����� ����������, �����ϱ� ������ modern c++������ �ٷ� �Ҵ簡��
	s.name = "�����";

	s.height = 170.2;

	cout << "sid : " << s.number << endl;
	cout << "name : " << s.name << endl;
	cout << "height : " << s.height << endl;

}