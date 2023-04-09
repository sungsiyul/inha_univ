#include <iostream>
using namespace std;

int main() {
	unsigned char x; // unsigned char의 범위 0 ~ 255

	for (x = 0; x <= 255; x++) {
		// 255보다 작으면 실행이 되는데 아무리 x++을 해도 overflow가 되면 다시 가장 작은 수가 됨. 무한루프
		cout << "ASCII value : " << int(x) << " Character : " << x << endl;
		if (x == 255)
			break;
	}

	return 0;
}