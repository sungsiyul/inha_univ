#include<iostream>
using namespace std;

enum tvtype{LCD, LED, PDP, TD};				//ó���� ���ڰ� �� �� ���� ��Ģ�� ����.

void main() {

	enum tvtype type;

	cout << "Enter the type of TV : ";
	//cin >> type; �̷��� ����� �ȵ�.
	//scanf�� �����
	scanf_s("%d", &type);					//�Է��� PDP�� �ϸ� ���� ��ü�� �ƽ�Ű�ڵ�� �ν��ؼ�
											//default���� ������ ���� 2�� �Է��ؾ���.
	//scanf�� ����ϱ� �ȴٸ�? �Ʒ�ó��
	//int input;
	//cin >> input;
	//type = static_cast<tvtype>(input)

	switch (type) {
	case LCD:
		cout << "LCD TV" << endl;
		break;
	case LED:
		cout << "LED TV" << endl;
		break;
	case PDP:
		cout << "PDP TV" << endl;
		break;
	case TD:
		cout << "TD TV" << endl;
		break;
	}
}