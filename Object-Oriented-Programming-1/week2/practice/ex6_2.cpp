#include<iostream>
using namespace std;

int main() {

	float y = 6.5e2; // 6.5 * 10의 2승

	cout << "y = " << y<<"\n";	//C++ : 소수점 표시 없음
	printf("y = %f\n", y);	//C : 소수점 표시 됨

	cout << scientific << "y = " << y << endl; //과학적 표기법 쓸 때 scientific
	printf("y = %e\n", y);	//C에서는 %e를 통해 과학적 표기를 함.

	return 0;

}