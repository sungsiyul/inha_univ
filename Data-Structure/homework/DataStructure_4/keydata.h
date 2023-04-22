#pragma once

class keydata {	//keydata 클래스
private:		//접근지정자 private
	friend void print_pair(const keydata* array, int size);							//print_pair함수에서 keydata 클래스의 멤버를 사용할 수 있게 함.
	friend void pair_insertion_sort(keydata* av, int size);							//pair_insertion_sort함수에서 keydata 클래스의 멤버를 사용할 수 있게 함.
	friend void pair_selection_sort(keydata* av, int size);							//pair_selection_sort함수에서 keydata 클래스의 멤버를 사용할 수 있게 함.
	friend void pair_merge_sorting(keydata* array, int start_index, int end_index);	//pair_merge_sort함수에서 keydata 클래스의 멤버를 사용할 수 있게 함.
	friend void pair_quick_sorting(keydata* array, int start_index, int last_index);//pair_quick_sort함수에서 keydata 클래스의 멤버를 사용할 수 있게 함.
	char key;	//key라는 문자형 변수를 멤버로 사용
	int data;	//data라는 정수형 변수를 멤버로 사용

public:			//접근지정자 public
	keydata(char k='a', int d=0) :key(k), data(d) {	//생성자, defalute construture, member initializer를 통해 값 초기화
		
	}
};