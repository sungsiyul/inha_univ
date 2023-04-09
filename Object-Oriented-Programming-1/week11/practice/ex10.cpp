#include<iostream>
using namespace std;

typedef struct point {
	int x;
	int y;
}POINT;

POINT translate(POINT p, POINT delta);

void main() {
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	result = translate(p, delta);

	cout << "coordinate of the new point : " << result.x << ", " << result.y;
}

POINT translate(POINT p, POINT delta) {
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;

}
