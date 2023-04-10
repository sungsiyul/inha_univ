//���� main�Լ��� ���Ե� driver.file
#include<iostream>		//iostream�� ��� �����ϰ� ��.
using std::cin;			//iostream�� ��� �� cin����� ����ϰ� ��.
using std::cout;		//iostream�� ��� �� cout����� ����ϰ� ��.
using std::endl;		//iostream�� ��� �� endl����� ����ϰ� ��.

#include "Account.h";	//������� "Account.h"�� ��� �����ϰ� ��.

int main() {			//main�Լ�, return type ������
	Account a1(1, 50);	//Account�� Ȱ���� a1�̶�� ��ü ����
	Account a2(2, 25);	//Account�� Ȱ���� a1�̶�� ��ü ����

	a1.getBalance();	//a1�� getBalance�Լ� ȣ��
	a2.getBalance();	//a2�� getBalance�Լ� ȣ��
	a1.debit();			//a1�� debit�Լ� ȣ��
	cout << endl;		//�ٹٲ� ���
	a1.getBalance();	//a1�� getBalance�Լ� ȣ��
	a2.getBalance();	//a2�� getBalance�Լ� ȣ��
	a2.debit();			//a2�� debit�Լ� ȣ��
	cout << endl;		//�ٹٲ� ���
	a1.getBalance();	//a1�� getBalance�Լ� ȣ��
	a2.getBalance();	//a2�� getBalance�Լ� ȣ��
	a2.credit();		//a2�� credit�Լ� ȣ��
	cout << endl;		//�ٹٲ� ���
	a1.getBalance();	//a1�� getBalance�Լ� ȣ��
	a2.getBalance();	//a2�� credit�Լ� ȣ��

	return 0;			//int������ ��ȯ�ؾ��ϱ� ������ return 0�� �Ѱ���.
}