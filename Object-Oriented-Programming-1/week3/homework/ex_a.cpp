#include <iostream>
using namespace std; // 쉽게 cout, cin, endl을 쓰기 위해
//using std ::cout;
//using std ::cin;
//using std ::endl;
// 이걸 안 쓰면 cout 쓸 때 "std cout << " 이런식으로 써야함.

int main() {

	int j=1;
	while (j <= 10) {
		cout << j << "\n";
		j++;
	}
}