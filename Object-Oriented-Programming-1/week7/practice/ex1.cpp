#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int grade[10];	//10�ڸ� �迭 ����
	int i;
	for (i = 0; i < 10; i++) {		//0~9, i++
		grade[i] = 0;				//grade[0] ~ grade[9]�� 0 �־��ֱ�
	}

	cout << "================" << "\n";
	cout << "  INDEX VALUE " << "\n";
	cout << "================" << "\n";

	for (int j = 0; j < 10; j++) {	//0~9 j++, ���������� �߰�ȣ �ۿ��� ���� X
		cout << setw(5) << j << setw(5) << grade[j] << "\n";	
	}

	return 0;

}