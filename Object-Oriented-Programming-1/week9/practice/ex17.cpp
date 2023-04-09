#include<iostream>
using namespace std;
#define SIZE 9

int seq_search(int list[], int n, int key);

int main() {

	int key;
	int grade[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	cout << "Å½»ö °ª : ";
	cin >> key;
	cout << "Å½»ö °á°ú = grade[" << seq_search(grade, SIZE, key) << "]";

	return 0;

}

int seq_search(int list[], int n, int key)
{
	for (int i = 0; i < n; i++)
		if (list[i] == key)
			return i;
	return -1;
}
