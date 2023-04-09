#include<iostream>
using namespace std;

int get_integer() {
	int n;
	cout << "integer value : ";
	cin >> n;

	return n;
}

int main() {
	int num;

	num = get_integer();

	cout << "Result : " << num << endl;

	return 0;
}