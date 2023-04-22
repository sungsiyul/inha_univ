#include<iostream>	//iostream ���̺귯�� ����
using std::cout;	//iostream ���̺귯�� �� cout ��� ����

#include "Media.h"	//Media.h�� ��� ��� ����.

Media::Media(string tit, int len){	//Media Ŭ������ ������ ����
	setTitle(tit);					//parameter�� �Ѱܹ��� tit���� setTitle�Լ��� argument�� ����Ͽ� �ѱ�
	setLength(len);					//parameter�� �Ѱܹ��� len���� setLength�Լ��� argument�� ����Ͽ� �ѱ�
	count++;						//count = count + 1
	cout << "Media object constructor for [ " << title << " ]\n";	//��¹� ���
}

Media::~Media() {					//Media Ŭ������ �Ҹ���
	cout << "Media object destructor for [ " << title << " ]\n";	//��¹� ���
}

void Media::setLength(int len) {	//Media Ŭ������ setLength �Լ�, int�� ���� len�� parameter�� �ϰ� ��ȯ�� ����.
	length = len;					//parameter�� �Ѱܹ��� len ������ private�� �ִ� length�� �� ����.
}

void Media::setTitle(string tit) {	//Media Ŭ������ setTitle �Լ�, string�� ���� tit�� parameter�� �ϰ� ��ȯ�� ����.
	title = tit;					//parameter�� �Ѱܹ��� tit ������ private�� �ִ� title�� �� ����.
}

string Media::getTitle() { return title; }	//Media Ŭ������ getTitle �Լ�, private�� �ִ� title�� ��ȯ����.

int Media::getLength() { return length; }	//Media Ŭ������ getTitle �Լ�, private�� �ִ� title�� ��ȯ����.

void Media::play() {						//Media Ŭ������ play �Լ�, parameter�� ��ȯ�� �Ѵ� ����.
	cout << "Media�� play�ǰ� �ֽ��ϴ�.\n";	//��¹� ���
}

Media* Media::operator+(Media* val) {			//+ ������ �����ε�
	int newLength;								//int�� ���� newLength ����
	newLength = length + val->length;			//newLength = mp[1]�� length + mp[2]�� length

	Media* newmp = new Media("new", newLength);	//�����Ͱ�ü newmp ���� �Ҵ�, title = "new", length = newLength

	return newmp;								//newmp ��ȯ
}

Media* Media::operator=(Media* m) {		// =(����) ������ �����ε�
	if (this == m) {					//���ǹ� if. ���� mp[3]�� newmp�� ���ٸ�
		return this;					//mp[3]�� ����Ű�� �ִ� ���� return.
	}			

	this->length = m->length;			//mp[3]�� length = newmp�� length
	delete m;							//heap ������ newmp�� delete
	return this;						//this(mp[3]) ��ȯ
}