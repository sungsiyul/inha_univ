#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	char* pc = NULL;

	pc = (char*)malloc(sizeof(char));

	//char *pc = new char;

	if (pc == NULL)
	{
		cout << "MEMORY ALLOCATION ERROR\n";
		exit(1);
	}
	*pc = 'm';
	cout << "*pc = " << *pc;
	free(pc);

	return 0;
}