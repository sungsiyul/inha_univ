#include<iostream>
#include<iomanip>
using namespace std;
#define SIZE 101

int main() {

	int freq[SIZE] = { 0 };
	int score;

	//8�����ο� {0}�� ���ָ� �Ʒ� for�� ��� ��.
	//for (int i = 0; i < SIZE; i++)
	//	freq[i] = 0;

	while (1)
	{
		cout << "���� �Է�(����-1) : ";
		cin >> score;
		if (score < 0) break;
		freq[score]++;
	}
	cout << " �� ��\n";

	for (int i = 0; i < SIZE; i++)
		cout << setw(3) << i << setw(3) << freq[i] << "\n";

	return 0;
}