#ifndef TIME_H	//���� Time.h�� ���ǵǾ����� �ʴٸ� #endif������ �����϶�.
#define TIME_H	//Time.h ����

class Time	//Complex��� Ŭ���� ����
{
private:
	int hour; // �ð��� ��Ÿ���� int�� ���� hour
	int minute; // ���� ��Ÿ���� int�� ���� minute
	int second; // �ʸ� ��Ÿ���� int�� ���� second
	int day;	// ��¥�� ��Ÿ���� int�� ���� day

public:	//���� ������ private
	Time(int = 0, int = 0, int = 0, int = 0); //��ü ������ �� ���� ���ص� ��� private�� ������ 0���� �ʱ�ȭ�ϴ� ������.

	void setTime(int, int, int, int); //private�� ��� �������� �����ϱ� ���� set�Լ� ���
	void setHour(int); // private�� hour�� �������ִ� set�Լ�, ������ ������ �Ѱܹ���.
	void setMinute(int); // private�� minute�� �������ִ� set�Լ�, ������ ������ �Ѱܹ���.
	void setSecond(int); // private�� second�� �������ִ� set�Լ�, ������ ������ �Ѱܹ���.
	void setDay(int);	//private�� day�� �������ִ� set�Լ�, ������ ������ �Ѱܹ���.

	int getHour(); //private�� hour���� return
	int getMinute(); // private�� minute���� return
	int getSecond(); // private�� second���� return
	int getDay();	// private�� day���� return

	void printStandard(); // ǥ�����·� ��, ��, ��, �ʸ� ����ϴ� �Լ�
	void tick();	//second�� 1�ʾ� ������Ű�� ��, ��, ���� ������Ű�� �Լ�.

};
#endif		//�ߺ� ���ǰ� ���� �� �ٷ� �� �������� �ͼ� ������ ������.