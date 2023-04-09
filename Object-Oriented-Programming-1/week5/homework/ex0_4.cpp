#include<iostream>
using namespace std;

void draw_rect(int side)
{
	int x, y;
	for (y = 0; y < side; y++)		
	{
		for (x = 0; x < side; x++)	
		{
			cout << "*";
		}
		cout << "\n";
	}
}

int main() {
	int num, X;			

	cout << "Input number : ";	
	cin >> X;					

	draw_rect(X);

	return 0;
}