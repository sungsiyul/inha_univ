#ifndef TIME_H	//만약 Time.h가 정의되어있지 않다면 #endif전까지 실행하라.
#define TIME_H	//Time.h 정의

class Time	//Complex라는 클래스 생성
{
private:
	int hour; // 시간을 나타내는 int형 변수 hour
	int minute; // 분을 나타내는 int형 변수 minute
	int second; // 초를 나타내는 int형 변수 second
	int day;	// 날짜를 나타내는 int형 변수 day

public:	//접근 지정자 private
	Time(int = 0, int = 0, int = 0, int = 0); //객체 생성시 값 지정 안해도 모든 private의 변수를 0으로 초기화하는 생성자.

	void setTime(int, int, int, int); //private의 모든 변수값을 지정하기 위해 set함수 사용
	void setHour(int); // private의 hour을 지정해주는 set함수, 정수형 변수를 넘겨받음.
	void setMinute(int); // private의 minute을 지정해주는 set함수, 정수형 변수를 넘겨받음.
	void setSecond(int); // private의 second을 지정해주는 set함수, 정수형 변수를 넘겨받음.
	void setDay(int);	//private의 day을 지정해주는 set함수, 정수형 변수를 넘겨받음.

	int getHour(); //private의 hour값을 return
	int getMinute(); // private의 minute값을 return
	int getSecond(); // private의 second값을 return
	int getDay();	// private의 day값을 return

	void printStandard(); // 표준형태로 일, 시, 분, 초를 출력하는 함수
	void tick();	//second를 1초씩 증가시키고 분, 시, 일을 증가시키는 함수.

};
#endif		//중복 정의가 됐을 때 바로 이 라인으로 와서 실행을 종료함.