#include <iostream>					//include the stdio header file
using namespace std;				//std를 안써도 cin, cout을 사용할 수 있게 함.

int add(int a);						//int add(int a) 함수의 프로토타입
int add_even(int a);				//int add_even(int a) 함수의 프로토타입
int add_odd(int a);					//int add_odd(int a) 함수의 프로토타입

int main() {						//main 함수 선언, int로 선언했기 때문에 return 값을 정수로 반환해야함.
	int n;							//n을 정수형으로 선언
	
	cout << "n을 입력하시오 : ";	//출력문 : n을 입력하시오
	cin >> n;						//n의 값을 직접 입력

	int sum = add(n);				//add 함수 call. 직접 입력한 n을 argument로 사용. 함수의 return값은 sum에 입력
	int sum_even = add_even(n);		//add_even 함수 call. 직접 입력한 n을 argument로 사용. 함수의 return값은 sum_even에 입력
	int sum_odd = add_odd(n);		//add_odd 함수 call. 직접 입력한 n을 argument로 사용. 함수의 return값은 sum_odd에 입력

	cout << "1~n까지의 합 : " << sum <<						//출력문 : 1~n까지의 합 : sum값 출력
		"\n1~n까지의 짝수의 합 : " << sum_even <<			//         1~n까지의 짝수의 합 : sum_even값 출력
		"\n1~n까지의 홀수의 합 : " << sum_odd << "\n";		//		   1~n까지의 홀수의 합 : sum_odd값 출력

	return 0;						//main함수를 int로 선언했기 때문에 정수 0을 반환
}

int add(int n) {								//int add 함수 정의, int n값을 parameter로 사용
	
	int sum = 0;								//sum을 정수형으로 선언, sum값을 0으로 초기화
												//(local변수, 각각의 함수에서 다른 sum으로 사용됨)
	for (int i = 1; i <= n; i++) {				//for문 사용.i를 정수형으로 선언.i=1로 초기화.i는 1씩 증가.조건(i<=n) 벗어날 때까지 반복
		sum += i;								//sum = sum + i를 통해 sum값에 누적하여 더해줌.
	}
	return sum;									//sum값을 return 해줌.
}

int add_even(int n) {							//int add_even 함수 정의, int n값을 parameter로 사용

	int sum = 0;								//sum을 정수형으로 선언, sum값을 0으로 초기화 
												//(local변수, 각각의 함수에서 다른 sum으로 사용됨)
	for (int i = 1; (2 * i) <= n; i++) {		//for문 사용.i를 정수형으로 선언.i=1로 초기화.i는 1씩 증가.조건(2*i<=n) 벗어날때까지 반복
		sum += (2 * i);							//sum = sum + (2*i)를 통해 sum값에 누적하여 짝수만 더해줌.
	}
	return sum;									//sum값을 return 해줌.
}

int add_odd(int n) {							//int add_odd 함수 정의, int n값을 parameter로 사용

	int sum = 0;								//sum을 정수형으로 선언, sum값을 0으로 초기화 
												//(local변수, 각각의 함수에서 다른 sum으로 사용됨)
	for (int i = 1; (2 * i) - 1 <= n; i++) {	//for문사용.i를정수형으로 선언.i=1로 초기화.i는 1씩 증가.조건((2*i)-1<=n)벗어날때까지반복
		sum += (2 * i) - 1;						//sum = sum + (2*i)-1 을 통해 sum값에 누적하여 짝수만 더해줌.
	}
	return sum;									//sum값을 return 해줌.
}