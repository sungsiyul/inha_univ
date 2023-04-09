#include<iostream>
using namespace std;

struct student {
	int kor;
	int eng;
	int mat;
};

void main() {
	
	student a1, a2, a3;
	cout << "Enter scores for 3 students\n";
	cout << "student 1: ";
	cin >> a1.kor;
	cin >> a1.eng;
	cin >> a1.mat;
	cout << "student 2: ";
	cin >> a2.kor;
	cin >> a2.eng;
	cin >> a2.mat;
	cout << "student 3: ";
	cin >> a3.kor;
	cin >> a3.eng;
	cin >> a3.mat;

	cout << "\nThe score report\n";
	cout << "student 1\n  korean: " << a1.kor << ", english: " << a1.eng << ", math: " << a1.mat << ",total: " << a1.kor + a1.eng + a1.mat << endl;
	cout << "student 2\n  korean: " << a2.kor << ", english: " << a2.eng << ", math: " << a2.mat << ",total: " << a2.kor + a2.eng + a2.mat << endl;
	cout << "student 3\n  korean: " << a3.kor << ", english: " << a3.eng << ", math: " << a3.mat << ",total: " << a3.kor + a3.eng + a3.mat << endl;

}