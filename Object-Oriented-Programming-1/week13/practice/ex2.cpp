#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int i;

	char* pc = NULL;
	pc = new char[100];

	
	if (pc == NULL)
	{
		cout << "MEMORY ALLOCATION ERROR\n";
		exit(1);
	}

	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;
	}
	*(pc + i) = 0;

	cout << pc << endl;
	delete[](pc);

	return 0;
}