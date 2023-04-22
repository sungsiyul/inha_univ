#ifndef MEDIA_H				//���� media.h�� ���� �Ǿ����� �ʴٸ� endif���� �����ض�.
#define MEDIA_H				//media.h ����

#include<iostream>			//iostream ���̺귯�� ����
#include<string>			//string ���̺귯�� ����
using namespace std;		//#include�� �ΰ��� ���̺귯���� ��� ��� ��밡��.

class Media {				//Media��� �̸��� class ����

private:					//���� ������ private
	int length;				//���̸� int�� ���� length�� ����

protected:					//���������� protected
	string title;			//�����ڿ� �Ҹ��ڿ��� ��� ��ü�� �����ƴ��� �˾ƺ��� ���� �ڽ�class������ title ���.

public:						//���������� public
	static int count;		//static ������ ���� count ����

	Media(string=" ", int=0);//Media class�� ������, default�� ����
	virtual ~Media();		//�����Լ� virtual ���, Media class�� �Ҹ���
	void setLength(int);	//setLength�Լ� ����
	void setTitle(string);	//setTitle�Լ� ����
	int getLength();		//getLength�Լ� ����
	string getTitle();		//getTitle�Լ� ����
	virtual void play();	//�����Լ� virtual ���, play�Լ� ����
	friend ostream& operator<<(ostream&, Media&);		//<<������ �����ε�, friend ����Ͽ� Media���� << �����ڿ� ����

	Media* operator+(Media*);		//+ ������ �����ε�
	Media* operator=(Media*);		//= ������ �����ε�
};							//class ������ �������� �� �ݵ�� ; ���̱�

#endif						//media.h�� ����Ǿ� �ִٸ� ��� �ǳʶٰ� �ٷ� endif�� ���� ����.