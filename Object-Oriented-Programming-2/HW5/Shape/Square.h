#pragma once

#include "Shape.h"

class Square : public Shape {	//Shape Ŭ������ ��ӹ���.
private:
	double side;				//�� ���� ����

public:
	Square(double);				//������
	~Square();					//�Ҹ���
	void setSide(double);		//side�� �����ϴ� set�Լ�
	double getSide();			//side�� �ҷ����� get�Լ�
	virtual double getArea();	//area�� �ҷ����� get�Լ�
	virtual void print();		//�� �Ļ�Ŭ������ ����� ����ϴ� print�Լ�
};