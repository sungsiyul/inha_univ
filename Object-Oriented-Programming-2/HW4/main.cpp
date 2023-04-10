#include <iostream>
#include <iomanip>
#include "myString.h"
using namespace std;

int main() {
	myString mystr1(50);
	myString mystr2(50);
	myString mystr3(50);

	cout << "================== >> operator overloading.... ==================" << endl;
	cin >> mystr1;	//>>������ �����ε��� ���� ���ڿ��� �Է¹���.
	cin >> mystr2;	//>>������ �����ε��� ���� ���ڿ��� �Է¹���.

	cout << "================== << operator overloading.... ==================" << endl;
	cout << mystr1;	//<<������ �����ε��� ���� ���ڿ��� �����.
	cout << mystr2;	//<<������ �����ε��� ���� ���ڿ��� �����.
	cout << endl;

	cout << "================== Check each str's informations ==================" << endl;
	mystr1.printString();	//myString Ŭ������ printString()�Լ� ȣ���Ͽ� mystr1�� length�� str ���
	mystr2.printString();	//myString Ŭ������ printString()�Լ� ȣ���Ͽ� mystr2�� length�� str ���
	cout << endl;

	cout << "================== Concatenate mystr2 to mystr1 ==================" << endl;
	myString concatenatedStr = mystr1 + mystr2;		//operator +�� ����Ͽ� concatenatedStr�� �� ��ü�� length�� str(���ڿ�)�� �����ְ�
													//��������ڸ� ���� �� ������ ��ü�� concatenatedStr��ü�� �����Ͽ� �����Ѵ�.
	cout << concatenatedStr;						//<<�����ڿ����ε��� ���� concatenatedStr��ü�� ���ڿ��� ����Ѵ�.
	cout << endl;


	cout << "================== Assign concatenatedStr to myStr3 ==================" << endl;
	mystr3 = concatenatedStr;	//copy(����) ������ �����ε��� ����Ͽ� concatenatedStr��ü�� mystr3�̶�� ��ü�� �����Ѵ�.
								//���� ��������ڿ� �ٸ� ���� ������ ���ÿ� �����ϴ� ���� �ƴ϶� �̹� ������� ��ü�� �����ϴ� ���̴�.
	mystr3.printString();		//myString Ŭ������ printString()�Լ� ȣ���Ͽ� mystr3�� length�� str ���
	cout << endl;


	cout << "================== Compare concatenatedStr and myStr3 ==================" << endl;
	cout << (mystr3 == concatenatedStr) << endl;	//==������ �����ε��� ���� copy(����) ������ ���� �� ��ü�� ������ ��Ÿ����.
	cout << endl;

	cout << "================== Compare myStr3 and myStr1 ==================" << endl;
	cout << (mystr3 == mystr1) << endl;				//==������ �����ε��� ���� �� ��ü�� �ٸ��� ��Ÿ����. ũ����� �ٸ���.
	cout << endl;

	cout << "================== Use [] to get a char element (index = 5, 20) ==================" << endl;
	cout << mystr3[5] << endl;		//mystr3�� 5��° �ε����� ���� ����Ѵ�. (���ȭ�� �� 6��° ����)
	cout << mystr3[20] << endl;		//mystr3�� 20��° �ε����� ���� ����Ѵ�. (���ȭ�� �� 21��° ����)
									//���� ���� index�� �ʰ��ҽ� error�޽����� ����Ѵ�. null���ڰ� �ִ� index�� ����ϸ� �ƹ��͵� �����Ƿ� �ƹ��͵� ������� �ʴ´�.
	return 0;	//main�Լ��� ��ȯ���� int�̹Ƿ� return 0;�� ���ش�.
}