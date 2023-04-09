#include<iostream>
using namespace std;

int abs_sub(int nx, int ny);
int abs_sum(int nx, int ny);
int power(int nx, int ny);

int main() {

	int m, n;
	int res;

	cout << "m = ";
	cin >> m;

	cout << "n = ";
	cin >> n;

	if (m > n)
		res = abs_sub(m, n);
	else if (m < n)
		res = abs_sum(m, n);
	else
		res = power(m, n);
	
	cout << "S = " << res << endl;

	return 0;
}

int abs_sub(int nx, int ny) {

	int i, j, res=0;

	for (i = 0; i <= nx; i++) {
		for (j = 0; j <= ny; j++) {
			if (j > i)
				res = res + (j - i);
			else
				res = res + (i - j);
		}
	}
	return res;
}

int abs_sum(int nx, int ny) {

	int i, j, res = 0;

	for (i = -nx; i <= nx; i++) {
		if (i < 0){
		
			for (j = -ny; j <= ny; j++) {
				if (j < 0)
					res = res + (-i - j);
				else
					res = res + (-i + j);
			}
		}

		else {

			for (j = -ny; j <= ny; j++) {
				if (j < 0)
					res = res + (i - j);
				else
					res = res + (i + j);
			}

		}
	}
	return res;
}

int power(int nx, int ny) {

	int res=1;

	for (int i = 1; i <= ny; i++) {

		res = res * nx;

	}

	return res;

}