#include<iostream>
#include<iomanip>
using namespace std;
#define SIZE 101

int main() {

	int freq[SIZE] = { 0 };
	int score;

	//8번라인에 {0}을 해주면 아래 for문 없어도 됨.
	//for (int i = 0; i < SIZE; i++)
	//	freq[i] = 0;

	while (1)
	{
		cout << "숫자 입력(종료-1) : ";
		cin >> score;
		if (score < 0) break;
		freq[score]++;
	}
	cout << " 값 빈도\n";

	for (int i = 0; i < SIZE; i++)
		cout << setw(3) << i << setw(3) << freq[i] << "\n";

	return 0;
}