#include <iostream>
using namespace std;

void display();	//display �Լ� ������Ÿ�� ����

int main() {	
	cout << "Only stupides use C?" << endl;	//main ��¹�
	display();		//display �Լ� ����

	return 0;
}

void display() {
	cout << "Fools too use C!" << endl;		//display ��¹�
	main();			//main�Լ��� �ٽ� call

}