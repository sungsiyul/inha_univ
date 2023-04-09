#include<iostream>
#include<string.h>
#include<cstring>		//string이라는 data type을 사용하기 위해 씀. c++에서는 std에서도 사용이 가능하기 때문에 iostream 하나만 있어도 됨.
using namespace std;

struct student {		//student 구조체 선언
	int number;			//학번 변수 선언
	string name;		//이름 선언
	//using namespace를 사용해서 std::string 임. 이거때문에 18번 라인에서 오류가 뜸
	double height;		//키 변수 선언
};

void main() {
	//struct student s;	//이 부분은 생략 가능
	student s;

	s.number = 12210000;		// s학생 학번 12210000
	//strcpy(s.name, "댕댕이");	// s학생 이름 댕댕이
								// strcpy를 사용

	//copy(s.name.begin(), s.name.end(), "댕댕이");
	//21번 라인처럼도 사용이 가능하지만, 복잡하기 때문에 modern c++에서는 바로 할당가능
	s.name = "댕댕이";

	s.height = 170.2;

	cout << "sid : " << s.number << endl;
	cout << "name : " << s.name << endl;
	cout << "height : " << s.height << endl;

}