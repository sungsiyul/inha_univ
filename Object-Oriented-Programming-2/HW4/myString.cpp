#include "myString.h"			//myString.h의 멤버와 기능을 모두 사용가능하게 함.

//생성자
myString::myString(int size){	//객체를 생성할 때 정수 하나를 넘겨받아 size로 사용
	length = size;				//size를 length에 대입.
	str = new char[length];		//length만큼의 문자열을 동적할당. 즉 생성자로 넘겨받은 size의 크기만큼 문자열을 동적할당함
	for(int i = 0; i < length; i++){	//할당된 배열 0 ~ size-1까지
		str[i] = 0;						//값은 0으로 초기화함.
	}
}

//복사생성자
myString::myString(const myString& copyobj) : length(copyobj.length) {	//받아온 객체의 length를 this->length에 대입.
	str = new char[length];					//this->str : length 크기의 문자열을 동적할당
	for (int i = 0; i < length; i++) {		//0부터 length-1까지
		str[i] = copyobj.str[i];			//받아온 객체 str 문자열을 this->str 문자열에 대입
	}
}

//소멸자
myString::~myString() {		//소멸자를 통해 해당 객체가 생성된 scope을 빠져나갈 때
	delete[] str;			//동적할당된 문자열 str을 소멸시킴.
}

//*****set function
void myString::setString(int length, char* str) {	//이미 생성된 객체의 string을 수정하여 대입하는 함수
	this->length = length;				//받아온 length를 this->length로 저장
	for (int i = 0; i < length; i++) {	//0부터 length-1까지
		this->str[i] = str[i];			//받아온 str 문자열을 this->str 문자열로 대입
	}
}
//*****concatenate
myString myString::operator+(myString& right) {	//객체와 객체를 더해서 객체를 출력하는 +연산자오버로딩
	int result_length = length + right.length -1;	//length에 null값을 포함되어있는데 두개의 배열이 합쳐지면 null값이 한개가 되기 때문에 1을 빼준 값이 결과로 나올 객체의 length이다.
	myString result(result_length);					//result라는 객체 생성, 생성자(constructure)을 통해 result_length 크기의 문자열이 동적할당됨.
	
	for (int i = 0; i < length-1; i++) {		//연산자 왼쪽 객체의 문자열부터 result.str에 차례대로 대입. null문자를 넣지 않기 위해 범위를 length-1 미만으로 함.
		result.str[i] = str[i];					
	}
	for (int j = 0; j < right.length; j++) {	//연산자 오른쪽 객체의 문자열는 result객체의 마지막 배열에 null문자가 들어가야하므로 범위를 length 미만으로 함.
		result.str[length-1+j] = right.str[j];	//이후 왼쪽 객체의 글자만 다 대입한 다음부터 차례대로 오른쪽 객체의 문자열을 result.str에 대입.
	}
	return result;	//완성된 result객체를 return함.
}					//생성자를 통해 동적할당 되었던 result.str이 해당 scope를 빠져나가면서 소멸자를 통해 소멸된다.

//copy(대입연산자)
void myString::operator=(myString& right) {
	if (&right != this) {				//같은 주소에 있는 값(자기자신)을 복사하면 그대로 자기자신의 값을 유지
		if (length != right.length) {	//대입하는 배열의 길이가 같지 않을 때
			delete[] str;				//this의 배열을 지워주고
			length = right.length;		//this의 length를 대입할 값의 length로 대입한다.
			str = new char[length];		//이후, 새로운 length만큼 문자열을 동적할당한다.
		}
		for (int i = 0; i < length; i++) {	//새롭게 할당된 str에 대입할 str을 그대로 대입
			str[i] = right.str[i];
		}
	}
}

//comparison
bool myString::operator==(myString& right) {
	if (length != right.length)			//배열의 길이가 다르면, 일치할수가 없으므로
		return false;					//false를 return함
	for (int i = 0; i < length; i++) {	//배열의 같은 위치를 모두 비교 했을 때
		if (str[i] != right[i])			//하나라도 같지 않은 순간
			return false;				//false를 return함
	}
	return true;						//두종류의 if문을 통과한다면 true를 return함.
}
bool myString::operator!=(myString& operand) {	//!=는 == 연산자 오버로딩과 결과가 항상 정 반대이므로
	if (length != operand.length)				//return 값을 true → false, false → true로 바꿔줌.
		return true;					
	for (int i = 0; i < length; i++) {	
		if (str[i] != operand[i])		
			return true;				
	}
	return false;

}
//index-based approaching
char myString::operator[](int n) {		//배열의 위치를 n번째 정수로 받음
	if (length <= n) {					//index기준 length번째 부터 범위 밖이고, 더 큰 값은 범위를 벗어나기 때문에
		cout << "Error index ; " << n << " out of range";	//오류메시지를 출력
		return 0;						//바로 연산자 오버로딩을 빠져나감.
	}
	char goal;		//원하는 위치의 문자를 goal이라는 문자형 변수를 통해 선언하고
	goal = str[n];	//넘겨받은 n번째 위치의 값을 goal로 지정하고

	return goal;	//goal을 return함.
}
void myString::printString() {								//String의 private 멤버인 length와 문자열을 출력하는 함수
	cout << "This string's length : " << length << endl;	//length 출력
	cout << "This string is : ";							//출력문 출력 후
	for(int i =0; i < length; i++){							//0부터 length-1까지
		cout << str[i];										//문자열의 모든 index 값을 출력
	}
	cout << endl;											//줄바꿈 출력
}

//입력을 위한 >>연산자 오버로딩
istream& operator>>(istream& input, myString& a) {
	int count = 0;	//입력받은 문자의 개수를 출력받기 위해 count라는 정수형 변수를 선언받고, 아무값도 받지 않았으니 초기값을 0으로 설정
	char tmp[1000];	//값을 입력받을 임시 문자형배열 tmp을 큰 숫자로(1000) 생성
	input >> tmp;	//tmp에 값을 받음
	for (int i = 0; i < 1000; i++) {	//0부터 999까지
		count++;						//반복문이 한번씩 돌때마다 count 값을 1씩 증가시키는데
		if (tmp[i] == '\0')				//반복 중 만약 배열의 값이 NULL인 순간. 즉, 문장이 끝난 다음 index를 만났을 때
			break;						//반복문을 탈출한다.
	}									//이렇게 되면 count에는 NULL문자를 포함한 문자의 글자수가 저장된다.

	a.length = count;					//이후 객체의 length값을 (실제 글자 + NULL문자)글자수인 count로 저장한다.
	for (int j = 0; j < count; j++) {	//j가 0 ~ count -1까지
		a.str[j] = tmp[j];				//임시로 저장받았던 문자열을 객체의 문자열에 대입한다.
	}
	return input;						//input을 반환한다.
}

//출력을 위한 <<연산자 오버로딩
ostream& operator<<(ostream& output, const myString& a) {	//원하는 형태로 출력이 가능함.
	output << "myString : ";					//출력문 출력
	for (int i = 0; i < a.length; i++) {		//0부터 a.length-1까지
		output << a.str[i];						//문자열 str을 출력
	}
	output << endl;								//줄바꿈 출력
	return output;								//output 반환
}