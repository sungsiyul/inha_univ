#include <iostream>							//include the stdio header file
using namespace std;						//std를 안써도 cin, cout을 사용할 수 있게 함.

int main() {								//main함수 선언, return값이 정수여야함.

	int a[] = { 10, 20, 30, 40, 50 };		//정수형 배열을 생성하고, 값을 초기화 해줌(10,20,30,40,50)

	cout << "a = " << a << endl;			//배열에서 그냥 a를 출력하면 그 첫번째 인덱스의 주소가 나옴. &a[0]
	cout << "a + 1 = " << a + 1 << endl;	//a가 첫번째 인덱스의 주소이기 때문에 a+1은 두번째 인덱스의 주소가 나옴. &a[1]
	cout << "*a = " << *a << endl;			//배열에서 그냥 a가 주소이기 때문에 *a는 그 주소에 저장된 값이 출력.
	cout << "*(a+1) = " << *(a+1) << endl;	//배열에서 그냥 a가 주소이기 때문에 a+1을 해서 a의 두번째 인덱스에 저장된 값이 출력.

	return 0;								//int main이기 때문에 정수(0)을 반환해줌.
}