#include <iostream>
using namespace std;

int main() {

	char Grade = 65;											// ASCII 코드를 사용하기 위해 65로 설정
	int Weight = 78;
	int Salary = 2000000;
	int Distance1 = 149600000;
	long long Price_of_apt = 2200000000;
	float Height = 178.9;
	float Distance2 = 2.0e19;
	double Distance3 = 3.0e123;

	cout << "Grade = " << Grade << "\n";
	cout << "Weight = " << Weight << "kg" << "\n";
	cout << "Salary = " << Salary << "원" << "\n";
	cout << "Distance1 = " << Distance1 << "km" << "\n";
	cout << "Price_of_apt = " << Price_of_apt << "원" << "\n";
	cout << "Height = " << Height << "cm" << "\n";
	cout << "Distance2 = " << scientific << Distance2 << "km" << "\n";	//과학적 표기를 위해 scientific 추가
	cout << "Distance3 = " << scientific << Distance3 << "km" << "\n";	//과학적 표기를 위해 scientific 추가
	return 0;
}