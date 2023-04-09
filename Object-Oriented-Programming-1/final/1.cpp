#include <iostream>
using namespace std;
#define AH 5
#define AW 1
#define BH 1
#define BW 5

void MatrixMulti(int A[AH][AW], int B[BH][BW], int R1[AH][BW])
{
	if (AW != BH)
	{
		cout << "행렬 계산 불가능 .\n" << endl;
	}
	else
	{
		for (int r = 0; r < AH; r++) {
			for (int c = 0; c < BW; c++) {
				for (int mul = 0; mul < AW; mul++) {
					R1[r][c] += A[r][mul] * B[mul][c];
				}
			}
		}
	}
}



void MatrixSum(int R1[AH][BW], int C[AH][BW], int R2[AH][BW])
{
	if (BW != AH)
	{
		cout << "행렬 계산 불가능" << endl;
	}
	else
	{
		for (int r = 0; r < AH; r++) {
			for (int c = 0; c < BW; c++) {
				R2[r][c] = R1[r][c] + C[r][c];
			}
		}
	}
}



int main() {

	int A[AH][AW] = { {1}, {1}, {1}, {1}, {1} };
	int B[BH][BW] = { 1, 2, 3, 4, 5 };
	int C[AH][BW] = { {5,0,0,0,0},{0,4,0,0,0},{0,0,3,0,0},{0,0,0,2,0},{0,0,0,0,1} };
	int R1[AH][BW] = { 0 };
	int R2[AH][BW] = { 0 };

	cout << "A = " << endl;
	for (int i = 0; i < AH; i++) {
		for (int j = 0; j < AW; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "B = " << endl;
	for (int i = 0; i < BH; i++) {
		for (int j = 0; j < BW; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	MatrixMulti(A, B, R1);

	cout << "R1 = " << endl;
	for (int i = 0; i < AH; i++)
	{
		for (int j = 0; j < BW; j++)
		{
			cout << R1[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl;

	MatrixSum(R1, C, R2);
	cout << "R2 = " << endl;
	for (int i = 0; i < AH; i++)
	{
		for (int j = 0; j < BW; j++)
		{
			cout << R2[i][j] << "  ";
		}
		cout << endl;
	}

}