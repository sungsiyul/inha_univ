#ifndef VTR_H							//���� VTR.h�� ���� �Ǿ����� �ʴٸ� endif���� �����ض�.
#define VTR_H							//VTR.h ����

#include "Media.h"						//Media.h ������� ���� ����� ��� ��� ����

class VTR: public Media {				//VTR�̶�� �̸��� class ����, Media�� �θ�� ������ ��Ӱ���

private:								//���� ������ private
	string format;						//���¸� string�� ���� format���� ����

public:									//���� ������ public
	VTR(string=" ", int=0, string=" ");	//VTR class�� ������, default�� ����
	~VTR();								//VTR class�� �Ҹ���
	void setFormat(string);				//setFormat�Լ� ����
	string getFormat();					//getFormat�Լ� ����
	void play();						//play�Լ� ����
};										//class ������ �������� �� �ݵ�� ; ���̱�

#endif									//VTR.h�� ����Ǿ� �ִٸ� ��� �ǳʶٰ� �ٷ� endif�� ���� ����.
