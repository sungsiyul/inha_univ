#include <iostream>
#define PI 3.141592 // #define�� ���� ��� ����

using namespace std;

int main() {

	float radius, area, circumference;

	cout << "insert the radius : ";
	cin >> radius; // keyboard ���� ���� radius�� �Ҵ�

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius;

	cout << "radius = " << radius << endl;
	cout << "circle area = " << area <<  " , circumference = " << circumference << "\n";
}