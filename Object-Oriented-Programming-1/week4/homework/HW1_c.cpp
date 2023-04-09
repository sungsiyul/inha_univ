#include<iostream>
using namespace std;

void main() {
	float a = 3.5;
	switch (int(a))									//float형 불가능
	{
		case int(0.5):								//이 안에는 int, character constant만 가능. float형 불가능.
			cout << "\nThe art of C";
		case int(1.5):
			cout << "\nThe spirit of C";
		case int(2.5):
			cout << "\nSee through C";
		case int(3.5):
			cout << "\nSimply c";
	}
}