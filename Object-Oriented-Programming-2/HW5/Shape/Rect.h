#pragma once

#include "Shape.h"

class Rect : public Shape {		//Shape Ŭ������ ��ӹ���.
private:
	double width;				//����
	double height;				//����

public:
	Rect(double, double);		//������
	~Rect();					//�Ҹ���
	void setWidthHeight(double, double);	//width�� height�� �����ϴ� set�Լ�
	double getWidth();			//width�� �ҷ����� get�Լ�
	double getHeight();			//height�� �ҷ����� get�Լ�
	virtual double getArea();	//area�� �ҷ����� get�Լ�
	virtual void print();		//�� �Ļ�Ŭ������ ����� ����ϴ� print�Լ�
};