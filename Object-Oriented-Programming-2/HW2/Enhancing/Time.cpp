#include <iostream>		//iostream ���̺귯���� �ִ� �Լ��� ����.
using std::cout;		//cout �Լ� ��� ����

#include <iomanip>		//iomanip ���̺귯���� �ִ� �Լ��� ����.
using std::setfill;		//setfill(������ ������ִ�) �Լ� ��� ����
using std::setw;		//setw(������ ä�� ���� �������ִ�) �Լ� ��� ����

#include "Time.h"		//Time.h�� public ��� ��� ����.

Time::Time(int da, int hr, int min, int sec) {	//�⺻ �����ڸ� ���� ��� 0���� �ʱ�ȭ
	setTime(da, hr, min, sec); // setTime�Լ� ȣ��, �������� �Ķ���͸� �״�� �ѱ�
}

void Time::setTime(int d, int h, int m, int s) {	//set�Լ��� �����Ͽ� �� ������ set�Լ��� ȣ����.
	setDay(d);	//setDay�Լ� ȣ��, d���� �ѱ�
	setHour(h); //setHour�Լ� ȣ��, h���� �ѱ�
	setMinute(m); //setMinute�Լ� ȣ��, m���� �ѱ�
	setSecond(s); //setSecond�Լ� ȣ��, s���� �ѱ�
}

void Time::setDay(int d) {	//private�� day��� ������ �������ִ� set�Լ�
	day = (d >= 0) ? d : 0;	//day�� �ϼ��� �����ϴ��� Ȯ���ϱ� �����̹Ƿ� ������ �ƴϰ� ������ �����ϰ� ������ �� 0�� �����Ѵ�.
}

void Time::setHour(int h) {	//private�� hour��� ������ �������ִ� set�Լ�
	hour = (h >= 0 && h < 24) ? h : 0; // hour�� 24�ð� ������ ��� 0���� ����
}

void Time::setMinute(int m) {	//private�� minute�̶�� ������ �������ִ� set�Լ�
	minute = (m >= 0 && m < 60) ? m : 0; // minute�� 60���� ������ ��� 0���� ����
}

void Time::setSecond(int s) {	//private�� second�̶�� ������ �������ִ� set�Լ�
	second = (s >= 0 && s < 60) ? s : 0; // second�� 60���� ������ ��� 0���� ����
}

int Time::getDay() { return day; }			//day���� ��ȯ�Ѵ�.
int Time::getHour() { return hour; }		//hour���� ��ȯ�Ѵ�.
int Time::getMinute() { return minute; }	//minute���� ��ȯ�Ѵ�.
int Time::getSecond() { return second; }	//second���� ��ȯ�Ѵ�.

void Time::printStandard() {		//dd�� hh:mm:ss am or pm ���·� ����ϴ� �Լ�
	cout << setfill('0') << setw(2) << day << "�� "	//2ĭ �Ҵ�. day�� ����ѵ� ��ĭ�� 0���� ä��.
		<< setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"	//2ĭ �Ҵ�. hour�� 0�̰ų� 12�� 12�� ���, �׷��� ������ 12�� �������� �������� ����Ͽ�
		<< setw(2) << minute << ":" << setw(2) << second	//���� 2ĭ �Ҵ�. minuted�� second�� ���.
		<< ((hour > 12 && hour < 24) ? " pm" : " am");	//�ð��� 12�ú��� 23�ñ��� �����̱� ������ ������ �̿Ͱ��� �����Ͽ� pm, am�� ��Ÿ��.
}

void Time::tick() {				//�� �� ����� �� 1�ʰ� �����ϴ� �Լ�
	second++;					//second�� second + 1�� ����
	if (second == 60) {			//���� �ʰ� 60���� �ȴٸ�
		minute++;				//1���� ���ϰ�
		second = 0;				//�ʸ� 0���� ���ش�.

		if (minute == 60) {			//���� ���� 60���� �ȴٸ�
			hour++;					//1�ð��� ���ϰ�
			minute = 0;				//���� 0���� ���ش�.

			if (hour == 24) {			//���� �ð� 24�ð� �ȴٸ�
				day++;					//1���� ���ϰ�
				hour = 0;				//�ø� 0���� ���ش�.
			}
		}
	}
}