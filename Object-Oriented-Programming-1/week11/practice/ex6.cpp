#include<iostream>
using namespace std;

union ip_address {

	unsigned long laddr;
	unsigned char saddr[4];

};

int main() {
	union ip_address addr;

	addr.saddr[0] = 1;		//01
	addr.saddr[1] = 0;		//00
	addr.saddr[2] = 0;		//00
	addr.saddr[3] = 127;	//7f
	//�ڿ��� ���� ��µ�.
	cout << "addr.laddr = " << hex << addr.laddr << endl;		//hex => 16����
	cout << "addr.laddr address = " << &addr.laddr << endl;
	
	cout << "addr.saddr = " << addr.saddr << endl;				//? �� r����??
	cout << "addr.saddr address = " << &addr.saddr << endl;

	//�ּҰ� ���� ����(union�̱� ������)

	return 0;
}