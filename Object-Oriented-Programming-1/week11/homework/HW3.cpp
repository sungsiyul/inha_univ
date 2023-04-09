#include<iostream>
using namespace std;

struct student {
	string name;

	int id;
	int age;
	char sex;

	int kor;
	int eng;
	int mat;
};

void main() {
	student a1, a2, a3;
	cout << "Enter name, students ID, age, sex(M for man, W for woman), and scores for 3 students\n";
	cout << "student 1: ";
	cin >> a1.name >> a1.id >> a1.age >> a1.sex >> a1.kor >> a1.eng >> a1.mat;
	cout << "student 2: ";
	cin >> a2.name >> a2.id >> a2.age >> a2.sex >> a2.kor >> a2.eng >> a2.mat;
	cout << "student 3: ";
	cin >> a3.name >> a3.id >> a3.age >> a3.sex >> a3.kor >> a3.eng >> a3.mat;

	cout << "\nThe score report\n";
	cout << "student 1\n student name: " << a1.name << ", student ID: " << a1.id << ", age: " << a1.age << ", sex: " << a1.sex <<
		"\n korean: " << a1.kor << ", english: " << a1.eng << ", math: " << a1.mat << ",total: " << a1.kor + a1.eng + a1.mat << endl;
	cout << "student 2\n student name: " << a2.name << ", student ID: " << a2.id << ", age: " << a2.age << ", sex: " << a2.sex <<
		"\n korean: " << a2.kor << ", english: " << a2.eng << ", math: " << a2.mat << ",total: " << a2.kor + a2.eng + a2.mat << endl;
	cout << "student 3\n student name: " << a3.name << ", student ID: " << a3.id << ", age: " << a3.age << ", sex: " << a3.sex <<
		"\n korean: " << a3.kor << ", english: " << a3.eng << ", math: " << a3.mat << ",total: " << a3.kor + a3.eng + a3.mat << endl;
}