#include <iostream>
using namespace std;

int main() {

	char i, j;

	for (j = 70; j >= 64; j--) {

		for (i = 65; i <= j; i++)
			cout << i << " ";

		if(j != 70) cout << i << " ";

		for (int space = 1; space <= (70 - j) * 2 - 1; space++)
			cout << "  ";

		for (i; i >= 65; i--)
			cout << i << " ";

		cout << "\n";
	}
}