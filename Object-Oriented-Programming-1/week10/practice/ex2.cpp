#include<iostream>
using namespace std;

struct student {		//student 구조체 선언
	int korean;
	int english;
	int math;
};

void main() {
	student x, y;

	x.korean = 80;
	x.english = 90;
	x.math = 70;

	cout << "x의 국어, 영어, 수학 점수 : " << x.korean << ", " << x.english << ", " << x.math << endl;

	cin >> y.korean >> y.english >> y.math;

	cout << "y의 국어, 영어, 수학 점수 : " << y.korean << ", " << y.english << ", " << y.math;

}