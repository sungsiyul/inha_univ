#include <iostream>		//iostream 라이브러리에 있는 함수를 포함.
using std::cout;		//cout 함수 사용 가능

#include <iomanip>		//iomanip 라이브러리에 있는 함수를 포함.
using std::setfill;		//setfill(공간을 만들어주는) 함수 사용 가능
using std::setw;		//setw(공간에 채울 값을 지정해주는) 함수 사용 가능

#include "Time.h"		//Time.h의 public 멤버 사용 가능.

Time::Time(int da, int hr, int min, int sec) {	//기본 생성자를 통해 모두 0으로 초기화
	setTime(da, hr, min, sec); // setTime함수 호출, 생성자의 파라미터를 그대로 넘김
}

void Time::setTime(int d, int h, int m, int s) {	//set함수를 분할하여 각 변수의 set함수를 호출함.
	setDay(d);	//setDay함수 호출, d값을 넘김
	setHour(h); //setHour함수 호출, h값을 넘김
	setMinute(m); //setMinute함수 호출, m값을 넘김
	setSecond(s); //setSecond함수 호출, s값을 넘김
}

void Time::setDay(int d) {	//private의 day라는 변수를 지정해주는 set함수
	day = (d >= 0) ? d : 0;	//day는 일수가 증가하는지 확인하기 위함이므로 음수만 아니게 조건을 설정하고 음수일 때 0을 저장한다.
}

void Time::setHour(int h) {	//private의 hour라는 변수를 지정해주는 set함수
	hour = (h >= 0 && h < 24) ? h : 0; // hour은 24시가 넘으면 모두 0으로 지정
}

void Time::setMinute(int m) {	//private의 minute이라는 변수를 지정해주는 set함수
	minute = (m >= 0 && m < 60) ? m : 0; // minute은 60분이 넘으면 모두 0으로 지정
}

void Time::setSecond(int s) {	//private의 second이라는 변수를 지정해주는 set함수
	second = (s >= 0 && s < 60) ? s : 0; // second은 60초이 넘으면 모두 0으로 지정
}

int Time::getDay() { return day; }			//day값을 반환한다.
int Time::getHour() { return hour; }		//hour값을 반환한다.
int Time::getMinute() { return minute; }	//minute값을 반환한다.
int Time::getSecond() { return second; }	//second값을 반환한다.

void Time::printStandard() {		//dd일 hh:mm:ss am or pm 형태로 출력하는 함수
	cout << setfill('0') << setw(2) << day << "일 "	//2칸 할당. day를 출력한뒤 빈칸은 0으로 채움.
		<< setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"	//2칸 할당. hour가 0이거나 12면 12를 출력, 그렇지 않으면 12로 나눈값의 나머지를 출력하여
		<< setw(2) << minute << ":" << setw(2) << second	//각각 2칸 할당. minuted와 second를 출력.
		<< ((hour > 12 && hour < 24) ? " pm" : " am");	//시간은 12시부터 23시까지 오후이기 때문에 조건을 이와같이 설정하여 pm, am을 나타냄.
}

void Time::tick() {				//한 번 실행될 때 1초가 증가하는 함수
	second++;					//second에 second + 1을 해줌
	if (second == 60) {			//만약 초가 60초이 된다면
		minute++;				//1분을 더하고
		second = 0;				//초를 0으로 해준다.

		if (minute == 60) {			//만약 분이 60분이 된다면
			hour++;					//1시간을 더하고
			minute = 0;				//분을 0으로 해준다.

			if (hour == 24) {			//만약 시가 24시가 된다면
				day++;					//1일을 더하고
				hour = 0;				//시를 0으로 해준다.
			}
		}
	}
}