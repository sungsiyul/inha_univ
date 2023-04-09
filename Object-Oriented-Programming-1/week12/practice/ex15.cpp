#include <iostream>												//include the stdio header file
using namespace std;											//std를 안써도 cin, cout을 사용할 수 있게 함.

struct point {													//point라는 구조체 생성
	int x;														//정수형 변수 x 생성
	int y;														//정수형 변수 y 생성
};

int get_line_parameter(struct point p1, struct point p2, float* slope, float* yintercept)
//get_line_parameter 함수 정의, 정수로 return, point라는 형태로 2개, 실수형태의 포인터 변수 2개를 받아야함.
{
	if (p1.x == p2.x)											//조건문if : p1의 x값과 p2의 x값이 같다면
		return -1;												//-1을 return 해줌.
	else{														//그렇지 않다면
		*slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x);	//*slope는 이 공식의 결과값을 저장함.
		*yintercept = p1.y - (*slope) * p1.x;					//*yintercept는 이 공식의 결과값을 저장함.
																//call by reference이기 때문에 main함수의 값도 동일함.
		return 0;												//0을 return 해줌.
	}
}

int main() {													//main함수 선언, return값이 정수여야함.

	struct point pt1 = { 3,3 }, pt2 = { 6,6 };					//point 형태의 변수 pt1, pt2를 생성, {3,3},{6,6}으로 초기화
	float s, y;													//실수형 변수 s, y 생성.

	if (get_line_parameter(pt1, pt2, &s, &y) == -1)				//조건문 if: 만약 get_line_parameter의 return값이 -1이라면
		cout << "error : same x axis\n";						//해당 문장을 출력
	else{														//그렇지 않으면
		cout << "Gradient is " << s << ", y-intercept is " << y << endl; //s값과 y값을 출력
	}
		
	return 0;													//int main이기 때문에 정수(0)을 반환해줌.
}