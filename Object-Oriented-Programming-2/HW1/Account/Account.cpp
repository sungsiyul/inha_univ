//class�� ���� ���μ����� �����ִ� source file.
#include<iostream>	//iostream�� ��� �����ϰ� ��.
using std::cin;		//iostream�� ��� �� cin����� ����ϰ� ��.
using std::cout;	//iostream�� ��� �� cout����� ����ϰ� ��.
using std::endl;	//iostream�� ��� �� endl����� ����ϰ� ��.

#include "Account.h"	//������� "Account.h"�� ��� �����ϰ� ��.

Account::Account(int num, int bal) {	//������, parameter�� ������ ���� 2��(num, bal)
	setAccount(bal);					//bal���� setAccount�Լ��� ����
	number = num;						//�Ѱܹ��� num���� number�� ����.
}

void Account::setAccount(int bal) {		//set�Լ�, �����ڿ��� �Ѱܹ��� bal���� �Լ� ���ο��� ���Ǵ� bal�� ����, return �� ����.
	if (bal >= 0)	balance = bal;		//���ǹ� if, ���� bal�� 0���� ũ�ų� ���� ��, bal ���� balance�� ����.
	else {								//�׷��� �ʴٸ�
		balance = 0;					//balance�� 0�� �����ϰ�
		cout << "���� : �ʱ��ܾ��� 0���� �۽��ϴ�.\n"; // �����޼��� ���.
	}
}

void Account::credit(){																				//credit�Լ� ����, return �� ����.
	int certain;																					//������ ���� certain ����.
	cout << "\nEnter certain amount for account" << number << " : ";								//Enter certain amount for account�� ����ϰ� �ڿ� number�� �ٿ���
	cin >> certain;																					//����ڰ� certain �� �Է�.
	cout << "\nattempting to addition " << certain << " from account" << number << " balance\n";	//�ش� ������ ����ϰ� ����ڰ� �Է��� certain���� �����.
	balance = balance + certain;																	//balance�� ���� �Է��� certain ���� �����༭ balance�� ���� ������Ʈ��.
}

void Account::debit() {																			//debit�Լ� ����, return �� ����.
	int deb;																					//������ ���� deb ����.
	cout <<"\nEnter withdrawal amount for account" << number << " : ";							////Enter withdrawal amount for account�� ����ϰ� �ڿ� number�� �ٿ���
	cin >> deb;																					//����ڰ� deb �� �Է�.
	cout << "\nattempting to subtract " << deb << " from account" << number << " balance\n";	//�ش� ������ ����ϰ� ����ڰ� �Է��� deb���� �����.

	if(deb <= balance){										//���ǹ� if, ���� deb���� balance���� �۰ų� ���ٸ�
		balance = balance - deb;							//balance - deb ���� balance �����Ͽ� ���� ������Ʈ��.
	}
	else{													//�׷��� �ʴٸ�
		balance = balance;									//���� �״�� �����ϰ�
		cout << "\nDebit amount exceeded account balace\n";	//�����޼��� ���
	}
}

void Account::getBalance() {											//getBalance�Լ� ����, return �� ����.
	cout << "account" << number << " balance: $" << balance << endl;	//Account�� ������ �Բ� �ܾ��� ���.
}
