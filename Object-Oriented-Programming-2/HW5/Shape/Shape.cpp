#include "Shape.h"

Shape::Shape(double ar) : area(ar) {
	//���ȭ��� ���Ͻ��ϱ� ���� �ּ�ó����.
	//cout << "Call Shape class constructure" << endl;
}
Shape::~Shape() {
	//���ȭ��� ���Ͻ��ϱ� ���� �ּ�ó����.
	//cout << "Call Shape class destructor" << endl;
}

//Shape Ŭ������ private����� area�� ���� �����ϱ� ���� set�Լ�
void Shape::setArea(double ar) {
	area = ar;
}

//Shape Ŭ������ private����� area�� ���� �ҷ����� ���� get�Լ�
double Shape::getArea() {
	//�� �Լ��� ���������Լ��ν� ���⼭ ������ �ϴ��� �ᱹ�� ��üŬ�������� �����ǵ� �Լ��� ����ȴ�.
	//�׷��Ƿ� �߻� Ŭ���������� �Լ� �������� �Ѱ��ְ� ���߿� ��üŬ�������� area�� ����ؾ��ϴµ�
	//�� �� Shape�� private����� area�� �����ؾ��ϱ� ������ area�� return�ϴ� ������ ��.
	return area;
}