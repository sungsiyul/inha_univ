#include <iostream>
using namespace std;

int main() {

	// ''�� ""�� ���� = ''�� �ѱ��� ""�� ���ڿ�string �� �� ���

	char code1 = 'A';
	char code2 = 65; // ���� 65������ char�� ���� ==> ���ڷ� �νĽ�Ŵ(ASCII�ڵ��)
	int code3 = 'A'; // ���� 'A'������ int�� ���� ==> ���ڷ� �νĽ�Ŵ(ASCII�ڵ��)
	char code4 = '65';	// ���������� 65�� ����ǥ �ȿ� �־��ָ鼭 ���ڷ� �νĽ�Ŵ
						// char�� ũ�Ⱑ 1����Ʈ���� '5'�� ����� ��.

	cout << "character constant = " << code1 << "\n";
	cout << "ASCII 65 is " << code2 << "\n";
	cout << code3 << endl;
	cout << code4;

}