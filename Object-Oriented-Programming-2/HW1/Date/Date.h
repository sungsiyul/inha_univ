#ifndef DATE_H	//���� DATE_H�� ���� �Ǿ����� �ʴٸ� �Ʒ��� �����ϰ�, ����Ǿ��ִٸ� #endif�� ����.
#define DATE_H	//��������� date.h�� ���.

class Date {	//Date��� �̸��� class(���赵)�� �����.
private:		//�ַ� ��� ���� ����.
	int month;	//month��� ������ ���� ����.
	int day;	//day��� ������ ���� ����.
	int year;	//year��� ������ ���� ����.
public:									//�ַ� ������, �Ҹ���, ��� �Լ� ����
	Date(int m=0, int d=0, int y=0);	//������ ����, 3���� parameters�� �ְ�, ��� default ���� 0���� ����.
	void setMonth(int m);				//month�� ���� ������ �� �ִ� set�Լ�.
	int getMonth();						//month�� ���� �ҷ����� get�Լ�.
	void setDay(int d);					//day�� ���� ������ �� �ִ� set�Լ�.
	int getDay();						//day�� ���� �ҷ����� get�Լ�.
	void setYear(int y);				//year�� ���� ������ �� �ִ� set�Լ�.
	int getYear();						//year�� ���� �ҷ����� get�Լ�.
	void displayDate();					//displayDate�Լ��� prototype
};										//class�� �ݾ��� �� �׻� �����ݷ��� �ٿ������.

#endif			//#ifdef���� ��������� �̹� ����Ǿ��ִٸ� �Լ��� �ٷ� ����� �ͼ� �����.
