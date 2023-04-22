#include<iostream>			//iostream ���̺귯�� ����
using std::cout;			//iostream ���̺귯�� �� cout ��� ����

#include "LegalDVD.h"		//LegalDVD.h�� ��� ��� ����.

LegalDVD::LegalDVD(string tit, int len, string lic, string cop):DVD(tit,len,lic) {	//LegalDVD Ŭ������ ������ ����. ��ӵ� ���� �ʱ�ȭ�⸦ ���� �θ�Ŭ������ ������ �ʱ�ȭ��.
	setCopyright(cop);																//parameter�� �Ѱܹ��� cop���� setCopyright�Լ��� argument�� ����Ͽ� �ѱ�
	cout << "LegalDVD object constructor for [ " << title << " ]\n";				//��¹� ���
}

LegalDVD::~LegalDVD() {														//LegalDVD Ŭ������ �Ҹ���
	cout << "LegalDVD object destructor for [ " << title << " ]\n";			//��¹� ���, ����� �޾ұ� ������ title ��� ����
}

void LegalDVD::setCopyright(string cop) {					//LegalDVD Ŭ������ setCopyright �Լ�, string�� ���� cop�� parameter�� �ϰ� ��ȯ�� ����.
	copyright = cop;										//parameter�� �Ѱܹ��� cop ������ private�� �ִ� copyright�� �� ����.
}

string LegalDVD::getCopyright() { return copyright; }		//LegalDVD Ŭ������ getCopyright �Լ�, private�� �ִ� copyright�� ��ȯ����.

void LegalDVD::play() {										//LegalDVD Ŭ������ play �Լ�, parameter�� ��ȯ�� �Ѵ� ����.
	cout << "LegalDVD�� play�ǰ� �ֽ��ϴ�.\n";				//��¹� ���
}