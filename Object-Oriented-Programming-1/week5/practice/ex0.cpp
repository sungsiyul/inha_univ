#include<iostream>
using namespace std;

int square(int n)		//square 함수 생성
{
	return (n * n);		// return 값에 제곱값 반환
}

int get_max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

int absolute(int x)
{
	if (x > 0) return x;
	else return -x;
}

int draw_rect(int side)
{
	int x, y;
	for (y = 0; y < side; y++)		//높이
	{
		for(x = 0; x <side; x++)	//너비
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}

int get_integer() {
	int n;
	cout << "integer value : ";
	cin >> n;

	return n;
}

int power(int x, int y)
{
	long result = 1;

	for (int i = 0; i < y; i++)
		result *= x;

	return result;

}

int factorial(int n)
{
	long result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;

}

void main() {
	int num, X, Y;			//main 함수에 사용할 변수 선언

	cout << "Input number : ";	// input number : 출력
	cin >> X;					// input 입력

	//cout << "Input number : ";	// input number : 출력
	//cin >> Y;					// input 입력

	num = factorial(X);			// 
	cout << "Result : " << num << endl; //

}
