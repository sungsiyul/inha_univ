//���� main�Լ��� ���Ե� driver.file
#include<iostream>	//iostream�� ��� �����ϰ� ��.
using std::cin;		//iostream�� ��� �� cin����� ����ϰ� ��.
using std::cout;	//iostream�� ��� �� cout����� ����ϰ� ��.
using std::endl;	//iostream�� ��� �� endl����� ����ϰ� ��.

#include"Date.h"	//������� "Date.h"�� ��� �����ϰ� ��.

int main() {		//main�Լ�, return type ������
	
	int mo, da, ye;					//������ ���� mo, da, ye ����
	cout << "Month : ";				//"Month : " ���
	cin >> mo;						//mo�� �Է�
	cout << "Day : ";				//"Month : " ���
	cin >> da;						//mo�� �Է�
	cout << "year : ";				//"Month : " ���
	cin >> ye;						//mo�� �Է�
	Date d1(mo, da, ye);			//Date�� Ȱ���� d1�̶�� ��ü ����
	cout << "\nOriginal Date :\n";	//Original Date :���, \n�ڸ��� �ٹٲ� ���
	d1.displayDate();				//d1�� dispayDate() �Լ� ȣ��
	d1.setMonth(1);					//d1�� setMonth�Լ� ȣ��, 1 ���� �Ѱ���
	d1.setDay(1);					//d1�� setDay�Լ� ȣ��, 1 ���� �Ѱ���
	d1.setYear(2005);				//d1�� setYear�Լ� ȣ��, 2005 ���� �Ѱ���
	cout << "\nNew Date :\n";		//New Date :���, \n�ڸ��� �ٹٲ� ���
	d1.displayDate();				//d1�� dispayDate() �Լ� ȣ��
	

	cout << "\nget�Լ��� Ȱ���� ���\n"											//�ش� ���� ���
		<< d1.getMonth() << " / " << d1.getDay() << " / " << d1.getYear();		//get�Լ��� Ȱ���� M/D/YYYY ���
	
	return 0;						//int������ ��ȯ�ؾ��ϱ� ������ return 0�� �Ѱ���.
}