#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

void filling(int a1[20][20]);
void show(int a[20][20]);
void rowsum(int a[20][20]);
void colsum(int a[20][20]);
void diagonalsum(int a[20][20]);
void backwarddiagonalsum(int a[20][20]);
void rowmax(int a[20][20]);
void colmax(int a[20][20]);
void maxrow(int a[20][20]);
void maxcol(int a[20][20]);

int main() {

	int a1[20][20] = { 0 };

	filling(a1);
	show(a1);
	cout << "\n";

	rowsum(a1);
	cout << "\n";

	colsum(a1);
	cout << "\n";

	diagonalsum(a1);
	cout << "\n";

	backwarddiagonalsum(a1);
	cout << "\n";

	rowmax(a1);
	cout << "\n";

	colmax(a1);
	cout << "\n";

	maxrow(a1);
	cout << "\n";

	maxcol(a1);
	cout << "\n";

	return 0;
}

void filling(int a[20][20]){

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			a[i][j] = rand() % 100;
		}
	}
}

void show(int a[20][20]) {

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << "\n";
	}
}

void rowsum(int a[20][20]) {

	int rs[20] = { 0 };

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			rs[i] = rs[i] + a[i][j];
		}
		cout << setw(2) << i+1 << "���� : " << rs[i] << endl;
	}
}

void colsum(int a[20][20]) {

	int cs[20] = { 0 };

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			cs[i] = cs[i] + a[j][i];
		}
		cout << setw(2) << i+1 << "���� : " << cs[i] << endl;
	}
}

void diagonalsum(int a[20][20]) {

	int ds=0;

	for (int j = 0; j < 20; j++) {
		for (int i = 0; i < 20; i++) {
			if (i == j)
				ds = ds + a[i][j];
		}
	}
	cout << "�밢���� �� : " << ds << "\n";
}

void backwarddiagonalsum(int a[20][20]) {

	int bds=0;

	for (int j = 0; j < 20; j++) {
		for (int i = 0; i < 20; i++) {
			if (i + j == 19)
				bds = bds + a[i][j];
		}
	}
	cout << "�� �밢���� �� : " << bds << "\n";
}

void rowmax(int a[20][20]) {
	
	int rmax[20] = { 0 };

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (rmax[i] < a[i][j])
				rmax[i] = a[i][j];
		}
		cout << setw(2) << i+1 << "���� �ִ� : " << rmax[i] << endl;
	}
}

void colmax(int a[20][20]) {

	int cmax[20] = { 0 };

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (cmax[i] < a[j][i])
				cmax[i] = a[j][i];
		}
		cout << setw(2) << i + 1 << "���� �ִ� : " << cmax[i] << endl;
	}
}

void maxrow(int a[20][20]) {

	int rmax[20] = { 0 };

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (rmax[i] < a[i][j])
				rmax[i] = a[i][j];
		}
	}

	int maxr=0;

	for (int i = 0; i < 20; i++) {
		if (maxr < rmax[i])
			maxr = rmax[i];
	}
	cout << "�� �հ��� �ִ밪 : " << maxr;
}

void maxcol(int a[20][20]) {

	int cmax[20] = { 0 };

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (cmax[i] < a[j][i])
				cmax[i] = a[j][i];
		}
	}

	int maxc = 0;

	for (int i = 0; i < 20; i++) {
		if (maxc < cmax[i])
			maxc = cmax[i];
	}
	cout << "�� �հ��� �ִ밪 : " << maxc;
}