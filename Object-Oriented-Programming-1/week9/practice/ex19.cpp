#include <iostream>
using namespace std;

constexpr int ROWS = 3;
constexpr int COLS = 3;

int main()
{
	int A[ROWS][COLS] = { {2,3,0},
						  {8,9,1},
						  {7,0,5} };
	int B[ROWS][COLS] = { {1,0,0},
						  {1,0,0},
						  {1,0,0} };
	int C[ROWS][COLS];
	for (int r = 0; r < ROWS; ++r)
		for (int c = 0; c < COLS; ++c)
			C[r][c] = A[r][c] + B[r][c];
	for (int r = 0; r < ROWS; ++r)
	{
		for (int c = 0; c < COLS; ++c)
			cout << C[r][c]<<" ";
		cout << endl;
	}

	int D[ROWS][COLS] = { 0 };
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			for (int mul = 0; mul < COLS; mul++)
			{
				D[r][c] += A[r][mul] * B[mul][c];
			}
		}
	}

	cout << endl;

	for (int r = 0; r < ROWS; ++r)
	{
		for (int c = 0; c < COLS; ++c)
			cout << D[r][c]<<" ";
		cout << endl;
	}
	return 0;
}