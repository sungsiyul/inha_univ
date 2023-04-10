#ifndef ACCOUNT_H	//���� ACCOUNT_H�� ���� �Ǿ����� �ʴٸ� �Ʒ��� �����ϰ�, ����Ǿ��ִٸ� #endif�� ����.
#define ACCOUNT_H	//��������� account.h�� ���.

class Account {		//Account��� �̸��� class(���赵)�� �����.
private:			//�ַ� ��� ���� ����.
	int balance;	//balance��� ������ ���� ����. �ܾ��� ��Ÿ��.
	int number;		//number��� ������ ���� ����. Account �ڿ� ��ȣ�� �ٿ���.

public:						//�ַ� ������, �Ҹ���, ��� �Լ� ����
	Account(int, int);		//������ ����, 2���� parameters�� ����.
	void setAccount(int);	//���� ������ �� �ִ� set�Լ�.
	void credit();			//credit�Լ��� prototype
	void debit();			//debit�Լ��� prototype
	void getBalance();		//getBalance�Լ��� prototype
};

#endif	//#ifdef���� ��������� �̹� ����Ǿ��ִٸ� �Լ��� �ٷ� ����� �ͼ� �����.