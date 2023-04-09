#include<iostream>
using namespace std;

int square(int n)
{
	return (n * n);
}

int main() {
	int num, X;			//main 함수에 사용할 변수 선언

	cout << "Input number : ";	// input number : 출력
	cin >> X;					// input 입력

	num = square(X);			// 
	cout << "Result : " << num << endl; //

	return 0;
}