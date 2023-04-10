#pragma once

#include "Shape.h"

class Circle : public Shape{	//Shape Ŭ������ ��ӹ���.
private:
	double radius;

public:
	Circle(double);				//������
	~Circle();					//�Ҹ���
	void setRadius(double);		//radius�� �����ϴ� set�Լ�
	double getRadius();			//radius�� �ҷ����� get�Լ�
	virtual double getArea();	//area�� �ҷ����� get�Լ�
	virtual void print();		//�� �Ļ�Ŭ������ ����� ����ϴ� print�Լ�
};