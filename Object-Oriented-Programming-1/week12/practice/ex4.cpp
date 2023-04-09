#include <iostream>					//include the stdio header file
using namespace std;				//std를 안써도 cin, cout을 사용할 수 있게 함.

int main() {						//main함수 선언, return값이 정수여야함.

	int i;							//정수형 변수 i를 선언.
	double* pd;						//double형태의 포인터 변수를 pd를 선언.

	pd = &i;						//Error발생 : 포인터 변수와 넣고 싶은 주소의 값의 data type이 일치해야함.
	*pd = 36.5;						//pd값에 36.5를 넣어줌. 

	return 0;						//int main이기 때문에 정수(0)을 반환해줌.
}