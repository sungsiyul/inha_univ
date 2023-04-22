#include<iostream>		//iostream ���̺귯�� ����
using std::cout;		//iostream ���̺귯�� �� cout ��� ����

#include"DVD.h"			//DVD.h�� ��� ��� ����.

DVD::DVD(string tit, int len, string lic) : Media(tit, len) {	//DVD Ŭ������ ������ ����. ��ӵ� ���� �ʱ�ȭ�⸦ ���� �θ�Ŭ������ ������ �ʱ�ȭ��.
	setLicense(lic);											//parameter�� �Ѱܹ��� lic���� setLicense�Լ��� argument�� ����Ͽ� �ѱ�
	cout << "DVD object constructor for [ " << title << " ]\n";	//��¹� ���
}

DVD::~DVD() {													//DVD Ŭ������ �Ҹ���
	cout << "DVD object destructor for [ " << title << " ]\n";	//��¹� ���, ����� �޾ұ� ������ title ��� ����
}

void DVD::setLicense(string lic) {		//DVD Ŭ������ setLicense �Լ�, string�� ���� lic�� parameter�� �ϰ� ��ȯ�� ����.
	license = lic;						//parameter�� �Ѱܹ��� lic ������ private�� �ִ� license�� �� ����.
}

string DVD::getLicense() { return license; }	//DVD Ŭ������ getLicense �Լ�, private�� �ִ� license�� ��ȯ����.

void DVD::play() {								//DVD Ŭ������ play �Լ�, parameter�� ��ȯ�� �Ѵ� ����.
	cout << "DVD�� play�ǰ� �ֽ��ϴ�.\n";		//��¹� ���
}
