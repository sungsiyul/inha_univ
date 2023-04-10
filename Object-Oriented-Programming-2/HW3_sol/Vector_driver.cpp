#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	int vector_size = 3;
	Vector vec1(vector_size);
	Vector vec2(vector_size);
	Vector k(vector_size);

	cout << vector_size << "개만큼의 vector 값을 입력해주세요" << endl;
	cin >> k;
	cout << k;

	vec1.setElement(0, 3);
	vec1.setElement(1, 1);
	vec1.setElement(2, 5);

	vec2.setElement(0, 1);
	vec2.setElement(1, -2);
	vec2.setElement(2, 7);

	//+ operator overloading 
	Vector addResult = vec1 + vec2;
	for (int i = 0; i < vector_size; i++) {
		cout << "vec1[" << i << "] + vec2[" << i << "] : " << addResult.getElement(i) << endl;
	}
	cout << endl;

	Vector subResult = vec1 - vec2;
	for (int i = 0; i < vector_size; i++) {
		cout << "vec1[" << i << "] - vec2[" << i << "] : " << subResult.getElement(i) << endl;
	}
	cout << endl;
	Vector mulResult = vec1 * vec2;
	for (int i = 0; i < vector_size; i++) {
		cout << "vec1[" << i << "] * vec2[" << i << "] : " << mulResult.getElement(i) << endl;
	}
	cout << endl;
	if (vec1 == vec2) {
		cout << "vec1==vec2  " << "TRUE" << endl;
	}
	else {
		cout << "vec1==vec2  " << "FALSE" << endl;
	}
	cout << endl;
	if (vec1 != vec2) {
		cout << "vec1!=vec2  " << "TRUE" << endl;
	}
	else {
		cout << "vec1!=vec2  " << "FALSE" << endl;
	}

	return 0;

}