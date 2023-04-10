#include <iostream>			//iostream ���̺귯���� �ִ� �Լ��� ����.
using std::cin;				//cin �Լ� ��� ����
using std::cout;			//cout �Լ� ��� ����
using std::endl;			//endl �Լ� ��� ����

#include "Complex.h";		//Complex.h�� public ��� ��� ����.

int main() {				//main�Լ�, ��ȯ���� int�̱� ������ �����Լ��� ���� return 0�� �ٿ���
	double a, b;			//������ ���� a�� �Ǽ���, b�� ����� ����.
	char PlusorMinus;		//�� ���� ������ ���� �Է��ϱ� ���� char�� ���� PlusorMinus ����.
	Complex result;			//�⺻�� 0 0 ��.

	cout << "�� ���Ҽ� (a + bi)�� ������ ����\n";	//��¹� ���
	
	cout << "a1, b1�� �Է��Ͻÿ�.\n";	//a�� b�� �Է¹ޱ� ���� �ȳ��� ���
	cin >> a >>  b;						//a�� b�� ���� ����ڿ��� �Է� ����
	Complex input1(a, b);				//a�� b���� Complex Ŭ������ ������ input1��ü�� �Ѱ���.

	cout << "a2, b2�� �Է��Ͻÿ�.\n";	//�ι�° a���� b���� ����
	cin >> a >> b;						//a�� b�� ���� ���Ӱ� �ʱ�ȭ����.
	Complex input2(a, b);				//���Ӱ� ������ a�� b���� Complex Ŭ������ ������ input2��ü�� �Ѱ���.
	
	cout << "+ or - ?\n";				//������ ���� ������ ���� ���ϱ� ���� �ȳ��� ���
	cin >> PlusorMinus;					//���� Ȥ�� ���� �Է�.
	
	cout << endl;						//�ٹٲ� ���

	if (PlusorMinus == '+') {			//���� ������ �ϱ����� +�� �Է��ߴٸ�
		result.plus(input1, input2);	//input1�� input2�� ������ plus�Լ��� ȣ����.
	}
	else if (PlusorMinus == '-') {		//���� ������ �ϱ����� -�� �Է��ߴٸ�
		result.minus(input1, input2);	//input1�� input2�� ���� minus�Լ��� ȣ����.
	}
	else{								//�ΰ��� �Ѵ� �Է����� �ʾҴٸ�
		cout << "only + or - !";		//�����޼����� �����.
	}

	return 0;			//main�Լ��� ��ȯ���� int�̹Ƿ� return 0�� �ٿ���
}