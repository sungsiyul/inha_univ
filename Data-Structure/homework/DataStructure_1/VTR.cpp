#include<iostream>		//iostream ���̺귯�� ����
using std::cout;		//iostream ���̺귯�� �� cout ��� ����

#include "VTR.h"		//VTR.h�� ��� ��� ����.

VTR::VTR(string tit, int len, string formatVideo) : Media(tit, len) {		//VTR Ŭ������ ������ ����. ��ӵ� ���� �ʱ�ȭ�⸦ ���� �θ�Ŭ������ ������ �ʱ�ȭ��.
	setFormat(formatVideo);													//parameter�� �Ѱܹ��� formatVideo���� setFormat�Լ��� argument�� ����Ͽ� �ѱ�
	cout << "VTR object constructor for [ " << title << " ]\n";				//��¹� ���
}

VTR::~VTR() {															//VTR Ŭ������ �Ҹ���
	cout << "VTR object destructor for [ " << title << " ]\n";			//��¹� ���, ����� �޾ұ� ������ title ��� ����
}

void VTR::setFormat(string formatVideo) {			//VTR Ŭ������ setFormat �Լ�, string�� ���� formatVideo�� parameter�� �ϰ� ��ȯ�� ����.
	format = formatVideo;							//parameter�� �Ѱܹ��� formatVideo ������ private�� �ִ� format�� �� ����.
}

string VTR::getFormat() { return format; }			//VTR Ŭ������ getFormat �Լ�, private�� �ִ� format�� ��ȯ����.


void VTR::play(){									//VTR Ŭ������ play �Լ�, parameter�� ��ȯ�� �Ѵ� ����.
	cout << "VTR�� play�ǰ� �ֽ��ϴ�.\n";			//��¹� ���
}