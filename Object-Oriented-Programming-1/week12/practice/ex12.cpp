#include <iostream>									//include the stdio header file
using namespace std;								//std�� �Ƚᵵ cin, cout�� ����� �� �ְ� ��.

struct student {									//student ����ü ����
	int number;										//������ ���� number ����
	char name[20];									//20ĭ¥�� ������ �迭 name ����	
	double height;									//�Ǽ��� ���� height ����
};

int main() {										//main�Լ� ����, return���� ����������.
	struct student s = { 20070001, "ȫ�浿", 180.2 };//student��� type�� ���� s�� ����, ���� �ʱ�ȭ����.
	struct student* p;								//student��� type�� ������ ���� p�� ����.

	p = &s;											//s�� �ּҸ� p�� ����.

	cout << "�й� = " << s.number << ", �̸� = " << s.name << ", Ű = " << s.height << endl;			//s�� ������ ���
	cout << "�й� = " << (*p).number << ", �̸� = " << (*p).name << ", Ű = " << (*p).height << endl;	//*p�� ������ ���
	cout << "�й� = " << p->number << ", �̸� = " << p->name << ", Ű = " << p->height << endl;			//p�ּҿ� �ִ� �����.
	return 0;										//int main�̱� ������ ����(0)�� ��ȯ����.
}