#include<iostream>
using namespace std;

void main() {
	int cont = 0, i = 1;

	while (1)	//�׻� ���̱� ������ ���ѷ���
		//for������ �ϴ� �� : for(;;)
	{
		cont = i + cont;
		if (cont >= 5050)
			break;
		i++;

	}
	cout << "i = " << i << " cont = " << cont << endl;
}