#pragma once

class keydata {	//keydata Ŭ����
private:		//���������� private
	friend void print_pair(const keydata* array, int size);							//print_pair�Լ����� keydata Ŭ������ ����� ����� �� �ְ� ��.
	friend void pair_insertion_sort(keydata* av, int size);							//pair_insertion_sort�Լ����� keydata Ŭ������ ����� ����� �� �ְ� ��.
	friend void pair_selection_sort(keydata* av, int size);							//pair_selection_sort�Լ����� keydata Ŭ������ ����� ����� �� �ְ� ��.
	friend void pair_merge_sorting(keydata* array, int start_index, int end_index);	//pair_merge_sort�Լ����� keydata Ŭ������ ����� ����� �� �ְ� ��.
	friend void pair_quick_sorting(keydata* array, int start_index, int last_index);//pair_quick_sort�Լ����� keydata Ŭ������ ����� ����� �� �ְ� ��.
	char key;	//key��� ������ ������ ����� ���
	int data;	//data��� ������ ������ ����� ���

public:			//���������� public
	keydata(char k='a', int d=0) :key(k), data(d) {	//������, defalute construture, member initializer�� ���� �� �ʱ�ȭ
		
	}
};