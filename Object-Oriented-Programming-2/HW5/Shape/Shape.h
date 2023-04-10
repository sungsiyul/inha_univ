#pragma once

#include <iostream>
using namespace std;

//�⺻ Ŭ�������� �߻�Ŭ����
class Shape {
private:
	double area;				//��� ��ü�� �ʿ��� area

public:
	Shape(double = 0.0);		//������, default constructor
	~Shape();					//�Ҹ���
	void setArea(double);		//area�� �����ϴ� set�Լ�
	virtual double getArea();	//area�� �ҷ����� get�Լ�
	virtual void print()=0;		//�� �Ļ�Ŭ������ ����� ����ϴ� print�Լ�, ���� �����Լ��̹Ƿ� =0�� ����.
};