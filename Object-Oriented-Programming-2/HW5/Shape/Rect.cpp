#include "Rect.h"

//������
Rect::Rect(double wid, double hei) {
	cout << "Call Rect class constructor" << endl;
	setWidthHeight(wid, hei);	//set�Լ��� ���� private�� ������.
}
//�Ҹ���
Rect::~Rect() {
	cout << "Call Rect class destructor" << endl;
}
//width�� height�� �����ϴ� set�Լ�
void Rect::setWidthHeight(double wid, double hei) {
	width = wid;
	height = hei;
}
//width�� �ҷ����� get�Լ�
double Rect::getWidth() {
	return width;
}
//height�� �ҷ����� get�Լ�
double Rect::getHeight() {
	return height;
}
//���簢�� ���� ���ϴ� �Լ�
//�����ǵ� �Լ�, �������ε��� ���� ����� �Լ��̴�.
double Rect::getArea() {
	double ar = width * height;	// ���簢�� ���� = ���� * ����
	setArea(ar);				//�⺻Ŭ������ public ����� ���� private ����� ����
	return Shape::getArea();	//���� getArea() �Լ������� �⺻Ŭ������ private����� area�� return���ִ� Shape Ŭ������ getArea�Լ� ȣ��
}

//���簢�� ���� ���� ���� ����ϴ� �Լ�
//�����ǵ� �Լ�, �������ε��� ���� ����� �Լ��̴�.
void Rect::print() {
	cout << "Rect's width : " << getWidth() << ", " << "height : " << getHeight() << endl;

}