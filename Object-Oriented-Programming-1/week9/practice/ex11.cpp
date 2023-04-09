#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int s[3][5];
	int value = 0;

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			s[i][j] = value++;
			cout << setw(3) << s[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}