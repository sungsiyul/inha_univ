#include <iostream>			//iostream ���̺귯���� �ִ� �Լ��� ����.
using std::cout;			//cout �Լ� ��� ����
using std::endl;			//endl �Լ� ��� ����

#include "Time.h"			//Time.h�� public ��� ��� ����.

int main() {				//main�Լ�, ��ȯ���� int�̱� ������ �����Լ��� ���� return 0�� �ٿ���

	Time t1(9, 23, 58, 58);	//���۽ð��� 9�� ���� 23�� 58�� 58�ʷ� ����
	
	for(int i=0;;i++){		//1�� �����Լ��� ����Լ��� �ݺ��� ���� for�� ���
		t1.tick();			//Time Ŭ������ ���� ���� ��ü t1�� tick �Լ� ȣ��
		t1.printStandard();	//Time Ŭ������ ���� ���� ��ü t1�� printStandard �Լ� ȣ��
		cout << endl;		//��ٲ� ���
		if (i == 70) break;	//��� ������ �����ϴ��� Ȯ���ϱ� ���� ���� 70�� ����
	}

	return 0;				//main�Լ��� ��ȯ���� int�̹Ƿ� return 0�� �ٿ���
}