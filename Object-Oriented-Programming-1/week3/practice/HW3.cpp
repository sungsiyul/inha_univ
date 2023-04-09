#include <iostream>
using namespace std;

int main() {

	int S1 = 0, S2 = 0;

	for (int i = 1; i <= 30; i++)
		S1 = S1 + (i * i) + 1;
	
	cout << "S1 = " << S1 << "\n";

	for (int i = 10; i <= 30; i++)
		for (int j = 0; j <= 5; j++)
			S2 = S2 + (i * j);

	cout << "S2 = " << S2 << "\n";

}