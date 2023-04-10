#pragma once			//������� �ߺ����� ����
#include <iostream>		//ostream, istream ����� ���� iostream ���̺귯���� ���
using namespace std;	//�� ���̺귯���� ����� ����� �� �տ� std:: ���� ����

class myString {
	friend ostream& operator<<(ostream& output, const myString&);	//friend�Լ��� ���� <<������ �����ε� �Լ������� myString�� ��� ��� ����
	friend istream& operator>>(istream& input, myString&);			//friend�Լ��� ���� >>������ �����ε� �Լ������� myString�� ��� ��� ����
private:
	char* str;
	int length;
public:
	myString(int);
	myString(const myString&);
	~myString();
	//set function
	void setString(int, char*);
	//concatenate
	myString operator+(myString&);
	//copy
	void operator=(myString&);
	//comparison
	bool operator==(myString&);
	bool operator!=(myString& operand);
	//index-based approaching
	char operator[](int);
	void printString();
};