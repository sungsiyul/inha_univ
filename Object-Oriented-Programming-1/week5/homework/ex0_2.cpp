#include<iostream>
using namespace std;

int get_max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

int main() {
	int num, X, Y;			

	cout << "Input number : ";
	cin >> X;

	cout << "Input number : ";
	cin >> Y;

	num = get_max(X, Y);			 
	cout << "Result : " << num << endl;

	return 0;
}