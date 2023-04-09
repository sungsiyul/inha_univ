#include<iostream>
using namespace std;

int main() {

	int a[10];
	int i, min = 2147483647, indexi;


	for (i = 0; i < 10; i++) {
		cin >> a[i];

	}

	for (i = 0; i < 10; i++) {
		if (min >= a[i]){
			min = a[i];
			indexi = i;
		}

	}

	cout << endl << "The min : " << min << endl;
	cout << endl << "The location of min : " << indexi << "(starting index from 0)" << endl;

	return 0;

}