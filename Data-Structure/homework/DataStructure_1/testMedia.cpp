#include<iostream>	//iostream ���̺귯�� ����
using std::cout;	//iostream ���̺귯�� �� cout ��� ����
using std::endl;	//iostream ���̺귯�� �� endl ��� ����

#include "Media.h"	//Media.h�� ��� ��� ����.
#include "DVD.h"	//DVD.h�� ��� ��� ����.
#include "VTR.h"	//VTR.h�� ��� ��� ����.
#include "LegalDVD.h"//LegalDVD.h�� ��� ��� ����.

int Media::count = 0;		//static������ �������� �ʱ�ȭ ��. 

ostream& operator<<(ostream& os, Media* m) {	//ostreamŬ���� ���ο� ������ �� ���� ������ �����Լ��� �����ϰ�
	m->play();									//�Ѱܹ��� mp[0]�� play ����
	return os;									//ostream ������ os�� ��ȯ
}


int main(void) {			//main�Լ� ����, return type : int

	Media* mp[4];			//��ü�� ������ �迭, ������ ��� �� new�� delete �ݵ�� ����� ��.

	mp[0] = new VTR("Hello", 15, "avi");		//������ ��ü �迭 ù��° ĭ�� heap ������ �Ҵ� �� VTR��ü�� ����.
	mp[1] = new DVD("Superman", 3, "123-9899");	//������ ��ü �迭 �ι�° ĭ�� heap ������ �Ҵ� �� DVD��ü�� ����.
	mp[2] = new LegalDVD("Marvel", 10, "456-9899", "GG entertainment");	//������ ��ü �迭 ����° ĭ�� heap ������ �Ҵ� �� LegalDVD��ü�� ����.
	mp[3] = new VTR("Disney", 23, "mkv");		//������ ��ü �迭 �׹�° ĭ�� heap ������ �Ҵ� �� VTR��ü�� ����.

	cout << endl;								//��ٲ޹��� ���

	for (int i = 0; i < Media::count; i++) {	//�ݺ��� for��, ���� i�� 0���� Media::count(4)���� 1�� �����ϸ鼭 �Ʒ� ���� �ݺ�
		mp[i]->play();							//mp[0] ~ mp[3]�� play�Լ� ����(������)
	}
	
	cout << "\n������ �����ε� �ǽ�\n";	//��¹� ���

	cout << mp[0];						//<<������ �����ε�. ������ ��ü�� mp[0]�� �޾� mp[0].play�� ���
	
	mp[3] = *mp[1] + mp[2];		//+ ������, =(����) ������ �����ε�. ���� ��ü�� ���¸� Ȱ���Ͽ� �����ε� ���.
	cout << mp[3]->getLength() << endl;	// 13	//���⼭ mp[3]�� ������ VTR class�� ��ü�� �ƴ� Media class�� ��ü�̴�.
	
	cout << endl;

	for (int i = 3; i >= 0; i--){	//�ݺ��� for��, ���� i�� 3���� 0���� 1�� �������ϸ鼭 �Ʒ� ���� �ݺ�
		delete mp[i];				//new�� ���� mp[0]~mp[3]���� ������ ������ mp[3]~m[0]�� �Ҹ��Ŵ
	}

	cout << "\n���ÿ� 12180626\n";	//�й� �̸� ���
	return 0;						//main�Լ��� return type�� int�̱� ������ int�� 0�� ��ȯ��.
}