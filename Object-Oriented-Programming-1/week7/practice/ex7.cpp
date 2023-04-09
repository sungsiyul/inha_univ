#include<iostream>
using namespace std;
const float SIZE = 5.0;

//int main() {
//	int a[SIZE] = { 1,2,3,4,5 };
//	int b[SIZE] = { 1,2,3,4,5 };
//
//	//이렇게 배열로 출력을 안하면 배열 자체의 주소가 출력
//	cout << a << "\n";
//	cout << b << "\n";
//
//	// 첫번째 비교 : 이렇게 배열 자체로 비교하면 안됨.
//	if (a == b)
//		cout << "a와 b는 같다" << "\n";
//
//	else
//		cout << "wrong result" << "\n";
//	
//	// 두번째 비교 : 그 칸마다 비교를 해줘야함.
//	for (int i = 0; i < SIZE; i++) {
//		if (a[i] != b[i]) {
//			cout << "a[] != b[]" << endl;		//달라지는 값을 만나는 순간. 출력
//			return 0;							//바로 return을 넣어서 main함수 끝내기
//		}
//	}
//	cout << "a[] = b[]" << endl;
//
//	return 0;
//}

// return 0을 못 쓸 때
void main() {
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1,2,3,4,5 };
	float z;
	//int compare=0;
	// 
	z = 21 / SIZE;
	cout << z << endl;
	//이렇게 배열로 출력을 안하면 배열 자체의 주소가 출력
	cout << a << "\n";
	cout << b << "\n";

	// 첫번째 비교 : 이렇게 배열 자체로 비교하면 안됨.
	if (a == b)
		cout << "a와 b는 같다" << "\n";

	else
		cout << "wrong result" << "\n";

	// 두번째 비교 : 그 칸마다 비교를 해줘야함.
	for (int i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) {
			//compare = 1;
			cout << "a[] != b[]" << endl;		//달라지는 값을 만나는 순간. 출력
			break;							//바로 return을 넣어서 main함수 끝내기
		}
	}

	for (int i = 0; i < SIZE; i++) {
		if (a[i] == b[i]) {
			//compare = 1;
			cout << "a[] = b[]" << endl;		//달라지는 값을 만나는 순간. 출력
			break;							//바로 return을 넣어서 main함수 끝내기
		}
	}
}