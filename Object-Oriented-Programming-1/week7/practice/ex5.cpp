#include<iostream>
using namespace std;
constexpr int SIZE = 5;

int main() {
	int array[SIZE] = { 1,2,3,4,5 };

	for (int i = 0; i <= SIZE; i++) {
		cout << "array[" << i << "] = " << array[i] << "\n";
	}
	//배열의 6번째 값이 나오는데 칸을 5개만 설정을 해서 쓰레기 값이 나옴
	return 0;

}