#include<stdio.h>
using namespace std;

void main() {
	int suite = 1;
	switch (suite)						//여기는 ;를 넣지 않음
	{
	case 0:							//; 대신 :
		printf("\nClub");
	case 1:							//; 대신 :
		printf("\nDiamond");
	}
}