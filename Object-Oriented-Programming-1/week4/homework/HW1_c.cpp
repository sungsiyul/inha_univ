#include<iostream>
using namespace std;

void main() {
	float a = 3.5;
	switch (int(a))									//float�� �Ұ���
	{
		case int(0.5):								//�� �ȿ��� int, character constant�� ����. float�� �Ұ���.
			cout << "\nThe art of C";
		case int(1.5):
			cout << "\nThe spirit of C";
		case int(2.5):
			cout << "\nSee through C";
		case int(3.5):
			cout << "\nSimply c";
	}
}