#ifndef DVD_H							//���� DVD.h�� ���� �Ǿ����� �ʴٸ� endif���� �����ض�.
#define DVD_H							//DVD.h ����

#include "Media.h"						//Media.h ������� ���� ����� ��� ��� ����

class DVD: public Media {				//DVD��� �̸��� class ����, Media�� �θ�� ������ ��Ӱ���

private:								//���� ������ private
	string license;						//�ڰݹ�ȣ�� string�� ���� license���� ����

public:									//���� ������ public
	DVD(string=" ", int=0, string=" ");	//DVD class�� ������, default�� ����
	~DVD();								//DVD class�� �Ҹ���
	void setLicense(string);			//setLicense�Լ� ����
	string getLicense();				//getLicense�Լ� ����
	void play();						//play�Լ� ����
};										//class ������ �������� �� �ݵ�� ; ���̱�

#endif									//DVD.h�� ����Ǿ� �ִٸ� ��� �ǳʶٰ� �ٷ� endif�� ���� ����.
