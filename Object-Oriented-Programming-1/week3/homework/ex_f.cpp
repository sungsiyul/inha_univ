#include <iostream>
using namespace std;

int main() {
	unsigned char x; // unsigned char�� ���� 0 ~ 255

	for (x = 0; x <= 255; x++) {
		// 255���� ������ ������ �Ǵµ� �ƹ��� x++�� �ص� overflow�� �Ǹ� �ٽ� ���� ���� ���� ��. ���ѷ���
		cout << "ASCII value : " << int(x) << " Character : " << x << endl;
		if (x == 255)
			break;
	}

	return 0;
}