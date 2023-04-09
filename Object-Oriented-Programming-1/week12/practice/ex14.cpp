#include <iostream>										//include the stdio header file
using namespace std;									//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

struct student {										//student��� ����ü ����
	int number;											//������ ���� number ����
	char name[10];										//10��¥�� ������ ���� name����
	double height;										//�Ǽ��� ���� height ����
	struct student* next;								//student��� ������ ������ ���� next ����.
};

int main() {											//main�Լ� ����, return���� ����������.

	struct student s1 = { 30, "Kim", 167.2, NULL };		//student ������ ���� s1�� ����, ���� �Է���. next�� �ΰ�
	struct student s2 = { 31, "Park", 179.1, NULL };	//student ������ ���� s2�� ����, ���� �Է���. next�� �ΰ�
	struct student* first = NULL;						//student ������ ������ ���� first�� �����ϰ� �ΰ����� �ʱ�ȭ
	struct student* current = NULL;						//student ������ ������ ���� current�� �����ϰ� �ΰ����� �ʱ�ȭ

	first = &s1;										//s1�� �ּҰ��� first�� ����
	s1.next = &s2;										//s2�� �ּҰ��� s1.next�� ����
	s2.next = NULL;										//�ΰ��� s2.next�� ����

	current = first;									//first�� ����� �ּҰ�(&s1)�� current�� ����.
	while (current != NULL) {							//�ݺ��� while ����. current�� �ΰ��� �ƴ� ������ �ݺ�.
		cout << "SID = " << current->number				//current�� number�� ���
			 << ", Name = " << current->name			//current�� name�� ���
			 << ", Height = " << current->height << endl;//current�� height�� ���
		current = current->next;						//current�� next�� ����Ǿ��ִ� �ּҰ�(or �ΰ�)�� current�� ����.
	}

	return 0;											//int main�̱� ������ ����(0)�� ��ȯ����.
}