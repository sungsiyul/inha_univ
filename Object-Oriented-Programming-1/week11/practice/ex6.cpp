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
	//뒤에서 부터 출력됨.
	cout << "addr.laddr = " << hex << addr.laddr << endl;		//hex => 16진수
	cout << "addr.laddr address = " << &addr.laddr << endl;
	
	cout << "addr.saddr = " << addr.saddr << endl;				//? 왜 r인지??
	cout << "addr.saddr address = " << &addr.saddr << endl;

	//주소가 같은 곳임(union이기 때문에)

	return 0;
}