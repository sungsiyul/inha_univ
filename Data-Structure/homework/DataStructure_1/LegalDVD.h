#ifndef LEGALDVD_H							//���� LegalDVD.h�� ���� �Ǿ����� �ʴٸ� endif���� �����ض�.
#define LEGALDVD_H							//LegalDVD.h ����

#include "DVD.h"							//DVD.h ������� ���� ����� ��� ��� ����

class LegalDVD: public DVD {				//LegalDVD��� �̸��� class ����, DVD�� �θ�� ������ ��Ӱ���

private:									//���� ������ private
	string copyright;						//���۱��� string�� ���� copyright�� ����

public:										//���� ������ public
	LegalDVD(string=" ", int=0, string=" ", string=" ");//LegalDVD class�� ������, default�� ����
	~LegalDVD();							//LegalDVD class�� �Ҹ���
	void setCopyright(string);				//setCopyright�Լ� ����
	string getCopyright();					//getCopyright�Լ� ����
	void play();							//play�Լ� ����
};											//class ������ �������� �� �ݵ�� ; ���̱�

#endif // !LEGALDVD_H						//LegalDVD.h�� ����Ǿ� �ִٸ� ��� �ǳʶٰ� �ٷ� endif�� ���� ����.
