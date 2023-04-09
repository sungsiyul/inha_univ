#include <iostream>																	//include the stdio header file
using namespace std;																//std를 안써도 cin, cout을 사용할 수 있게 함.

int N = 1000;																		//N을 정수형으로 선언, 전역변수로 사용, N의 값을 1000으로 초기화
int cal_sum();																		//int cal_sum이라는 함수의 프로토타입

void main() {																		//main 함수 선언, void이기 때문에 return 값 없음.
	int sum;																		//sum을 정수형으로 선언
	sum = cal_sum();																//cal_sum()함수를 call해줌. 함수의 return값을 sum에 입력.
	{																				//괄호 열기, 이 안에서 선언된 변수는 이 괄호 안에서만 사용 가능(local 변수)
		int k;																		//k를 정수형으로 선언
		k = 9;																		//k의 값을 9로 초기화
		cout << "k = " << k << "\n";												//출력문 "k = 9" 출력
	}																				//괄호 닫기, 이 안에서 선언된 변수는 이 괄호 안에서만 사용 가능(local 변수)
	cout << "sum of first " << N << " naural numbers is " << sum << "\n";			//출력문 "sum of first 1000 naural numbers is 1001
}																					//main함수 괄호 닫기.

int cal_sum() {																		//int cal_sum()함수 정의, parameter는 없지만 return값은 있는 형태
	int i, s = 0;																	//i와 s를 정수형으로 선언, s는 0으로 초기화
	for (i = 0; i <= N; i++) {														//for문(반복문) 사용, i는 0으로 설정, i++(i는 1씩 증가), 조건에 벗어날 때까지 반복, i <= 1000
		s = s + 1;																	//위의 조건에 벗어나지 않는다면 s = s + 1 실행, s += 1로도 사용 가능
	}																				//for문 괄호 닫기.
	return (s);																		//cal_sum()함수에서 s값을 return해줌
}																					//int cal_sum()함수 괄호 닫기.