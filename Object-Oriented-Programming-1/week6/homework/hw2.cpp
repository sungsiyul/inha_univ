#include <iostream>					//include the stdio header file
using namespace std;				//std를 안써도 cin, cout을 사용할 수 있게 함.

int get_max2(int x, int y);			//int get_max2(int x, int y) 함수의 프로토타입
int get_max3(int x, int y, int z);	//int get_max3(int x, int y, int z) 함수의 프로토타입
int main(void) {					//main 함수 선언, int로 선언했기 때문에 return 값을 정수로 반환해야함.
	int max1, max2;					//max1, max2를 정수형으로 선언
	int x = 2, y = 5, z = -2;		//x, y, z를 정수형으로 선언, x=2, y=5, z=-2로 초기화.
	max1 = get_max2(x, z);			//get_max2 함수 call. x값(2)와 z값(-2)를 argument로 사용. 함수의 return값은 max1에 입력
	max2 = get_max3(x, y, z);		//get_max3 함수 call. x값(2)와 y값(5), z값(-2)를 argument로 사용. 함수의 return값은 max2에 입력

	cout << "the maximum value is " << max1 << "\n";	// 출력문 "the maximum value is 2" 출력
	cout << "the maximum value is " << max2 << "\n";	// 출력문 "the maximum value is 5" 출력

	return 0;						//main함수를 int로 선언했기 때문에 정수 0을 반환
}

int get_max2(int x, int y) {		//int get_max2(int x, int y)함수 정의. int x, int y값을 parameters로 사용.
									//int로 선언했기 때문에 return값을 정수로 반환해야함.
	if (x > y)						//조건문 사용. x가 y보다 클 때
		return x;					//x값을 return 함.
	else							//이 외의 경우에(x가 y보다 작거나 같을때)
		return y;					//y값을 return 함.
}								

int get_max3(int x, int y, int z) {	//int get_max3(int x, int y, int z)함수 정의. int x, int y, int z값을 parameters로 사용.
									//int로 선언했기 때문에 return값을 정수로 반환해야함.
	if (x > y) {					//이중 if문 사용. x가 y보다 클 때
		if (x > z)					//더 큰 값인 x와 나머지 값인 z를 비교하여 x가 더 크다면
			return x;				//x를 return
		else						//이외의 경우(더 큰 값인 x와 나머지 값인 z를 비교하여 x가 더 작거나 같다면)
			return z;				//z를 return
	}
	else {							//바깥쪽 if문 이외의 경우(x가 y보다 작거나 같다면)
		if (y > z)					//더 큰 값인 y와 나머지 값인 z를 비교하여 y가 더 크다면
			return y;				//y를 return
		else						//이외의 경우(더 큰 값인 y와 나머지 값인 z를 비교하여 y가 더 작거나 같다면)
			return z;				//z를 return
	}
}