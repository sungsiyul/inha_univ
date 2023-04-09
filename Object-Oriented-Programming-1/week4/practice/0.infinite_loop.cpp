#include<iostream>
using namespace std;

void main() {
	int cont = 0, i = 1;

	while (1)	//항상 참이기 때문에 무한루프
		//for문으로 하는 법 : for(;;)
	{
		cont = i + cont;
		if (cont >= 5050)
			break;
		i++;

	}
	cout << "i = " << i << " cont = " << cont << endl;
}