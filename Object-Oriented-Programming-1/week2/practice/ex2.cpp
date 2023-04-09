#include <iostream>
#define PI 3.141592 // #define을 통해 상수 선언

using namespace std;

int main() {

	float radius, area, circumference;

	cout << "insert the radius : ";
	cin >> radius; // keyboard 받은 값을 radius에 할당

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius;

	cout << "radius = " << radius << endl;
	cout << "circle area = " << area <<  " , circumference = " << circumference << "\n";
}