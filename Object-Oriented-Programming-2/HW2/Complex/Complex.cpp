#include <iostream>		//iostream ���̺귯���� �ִ� �Լ��� ����.
using std::cout;		//cout �Լ� ��� ����

#include "Complex.h"	//Complex.h�� public ��� ��� ����.

Complex::Complex(double realNum, double imgNum):realNumber(realNum), imgNumber(imgNum) {	//������, �䱸���׿� �°� double������ ������ ����, member initializer�� ���� private�� ���� ��ü ������ ���ÿ� �ʱ�ȭ.
													//member initializer�� ���� ���� �ʱ�ȭ ����� ������ set�Լ��� ������� �ʾƵ� ��.	

}

Complex::~Complex() {		//�Ҹ���, parameter�� return �� ����.
}

void Complex::plus(const Complex x, const Complex y) {	//�� ���Ҽ��� �����ִ� �Լ�, �Ѱܹ޴� �� ��ü�� ������ �����Ƿ� const�� �ٿ���
	Complex result;										//�� �Լ��� ���ؼ� ������ ��ü�� �̸� ������. �⺻ �����ڷ� ���� result�� realNumber�� imgNumber�� 0���� �ʱ�ȭ�ȴ�.
	result.realNumber = x.realNumber + y.realNumber;	//�Ѱܹ��� ��ü�� �Ǽ��κ�(realNumber)�� ���ؼ� result�� realNumber�� ������.
	result.imgNumber = x.imgNumber + y.imgNumber;		//�Ѱܹ��� ��ü�� �Ǽ��κ�(imgNumber)�� ���ؼ� result�� imgNumber�� ������.
	char plus = '+';									//���߿� ����� �� +��ȣ�� ����ϱ� ���� char�� ���� plus�� ���� '+'�� �־���
	commatypePrint(plus, x, y, result);					//(a,b)���·� ����ϴ� �Լ�, plus��ȣ��, ���� ������ ����ϱ� ���� �������� ���Ҽ� x�� y �׸��� ����� ��Ÿ���� result ��ü���� �Ѱ��ش�.
	equationtypePrint(plus, x, y, result);				//a+bi���·� ����ϴ� �Լ�,  plus��ȣ��, ���� ������ ����ϱ� ���� �������� ���Ҽ� x�� y �׸��� ����� ��Ÿ���� result ��ü���� �Ѱ��ش�.
}

void Complex::minus(const Complex x, const Complex y) {	//�� ���Ҽ��� ���ִ� �Լ�, �Ѱܹ޴� �� ��ü�� ������ �����Ƿ� const�� �ٿ���
	Complex result;										//���� ���Ҽ����� ���� ���Ҽ��� ���� ������ ���� ������ ��ü�� �̸� ������. �⺻ �����ڷ� ���� result�� realNumber�� imgNumber�� 0���� �ʱ�ȭ�ȴ�.
	result.realNumber = x.realNumber - y.realNumber;	//�Ѱܹ��� ��ü�� �Ǽ��κ�(realNumber)�� ���� result�� realNumber�� ������.
	result.imgNumber = x.imgNumber - y.imgNumber;		//�Ѱܹ��� ��ü�� �Ǽ��κ�(imgNumber)�� ���� result�� imgNumber�� ������.
	char minus = '-';									//���߿� ����� �� -��ȣ�� ����ϱ� ���� char�� ���� plus�� ���� '-'�� �־���
	commatypePrint(minus, x, y, result);				//(a,b)���·� ����ϴ� �Լ�, minus��ȣ��, ���� ������ ����ϱ� ���� ���Ҽ� x�� y �׸��� ����� ��Ÿ���� result ��ü���� �Ѱ��ش�.
	equationtypePrint(minus, x, y, result);				//a+bi���·� ����ϴ� �Լ�, minus��ȣ��, ���� ������ ����ϱ� ���� ���Ҽ� x�� y �׸��� ����� ��Ÿ���� result ��ü���� �Ѱ��ش�.
}

void Complex::commatypePrint(char plusorminus, Complex x, Complex y, Complex result) {	//(a,b)���·� ����ϴ� �Լ�. ��ȣ�� ����� ����� �Ǵ� �� �ΰ��� ��ü�� ������� ��ü�� �Ѱܹ���
	cout << "(" << x.realNumber << ", " << x.imgNumber << ") " << plusorminus << " ("	//���� ���ǿ� �°� ���.
		<< y.realNumber << ", " << y.imgNumber << ") = ("
		<< result.realNumber << ", " << result.imgNumber << ")\n";
}

void Complex::equationtypePrint(char plusorminus, Complex x, Complex y, Complex result) {	//a+bi���·� ���, bi�� ������ ���� -��ȣ�� �������� ����� ���� �տ� �ƹ��� ��ȣ�� ���� ������ ���ǹ��� Ȱ���Ͽ� +��ȣ�� ���� �ٿ���
	if (x.imgNumber >= 0){	//���� ���Ҽ��� ����� ����� ��
		cout << x.realNumber << '+' << x.imgNumber << "i " << plusorminus << " ( ";;		//���� ���Ҽ��� ����κ��� ��µ� �� �տ� + ��ȣ�� �ٿ���. plusorminus�� plus�Լ� Ȥ�� minus�Լ����� �Ѱܹ��� ��ȣ�� �����.
	}
	else{					//�׷��� �ʴٸ�(������ ��)
		cout << x.realNumber << x.imgNumber << "i " << plusorminus << " ( ";;				//���� +��ȣ�� ������ �������ν� +�� -��ȣ�� ���ÿ� ��µ��� �ʰ���. plusorminus�� plus�Լ� Ȥ�� minus�Լ����� �Ѱܹ��� ��ȣ�� �����.
	}
	/////////////////////////////////////////////////////////////////////
	if (y.imgNumber >= 0) {	//���� ���Ҽ��� ����� ����� ��
		cout << y.realNumber << '+' << y.imgNumber << "i ) = ";								//���� ���Ҽ��� ����κ��� ��µ� �� �տ� + ��ȣ�� �ٿ���. plusorminus�� plus�Լ� Ȥ�� minus�Լ����� �Ѱܹ��� ��ȣ�� �����.
	}
	else{					//�׷��� �ʴٸ�(������ ��)
		cout << y.realNumber << y.imgNumber << "i ) = ";									//���� +��ȣ�� ������ �������ν� +�� -��ȣ�� ���ÿ� ��µ��� �ʰ���. plusorminus�� plus�Լ� Ȥ�� minus�Լ����� �Ѱܹ��� ��ȣ�� �����.
	}
	/////////////////////////////////////////////////////////////////////
	if(result.imgNumber >= 0){	//������� ���Ҽ��� ����� ����� ��
		cout << result.realNumber << "+" << result.imgNumber << "i\n";						//������� ���Ҽ��� ����κ��� ��µ� �� �տ� + ��ȣ�� �ٿ���. plusorminus�� plus�Լ� Ȥ�� minus�Լ����� �Ѱܹ��� ��ȣ�� �����.
	}
	else{						//�׷��� �ʴٸ�(������ ��)
		cout << result.realNumber << result.imgNumber << "i\n";								//���� +��ȣ�� ������ �������ν� +�� -��ȣ�� ���ÿ� ��µ��� �ʰ���. plusorminus�� plus�Լ� Ȥ�� minus�Լ����� �Ѱܹ��� ��ȣ�� �����.
	}
}

