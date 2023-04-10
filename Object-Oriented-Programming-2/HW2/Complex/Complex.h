#ifndef COMPLEX_H						//���� Complex.h�� ���ǵǾ����� �ʴٸ� #endif������ �����϶�.
#define COMPLEX_H						//Complex.h ����

class Complex {							//Complex��� Ŭ���� ����

private:								//���� ������ private
	double realNumber;										//��ü�� �Ǽ�
	double imgNumber;										//��ü�� ���

public:									//���� ������ public
	Complex(double = 0, double = 0);						//��ü ������ �� ���� ���ص� ��� private�� ������ 0���� �ʱ�ȭ�ϴ� default constructure.
	~Complex();												//�Ҹ���
	void plus(Complex, Complex);							//1���Լ� : �� ���Ҽ� ���ϱ�
	void minus(Complex, Complex);							//2���Լ� : �� ���Ҽ� ����
	void commatypePrint(char, Complex, Complex, Complex);	//3���Լ� : (a, b)�������� ���Ҽ��� ����ϱ�
	void equationtypePrint(char, Complex, Complex, Complex);//4���Լ� : a + bi �������� ���Ҽ��� ����ϱ�
};	//Ŭ���� ���Ǹ� ��ĥ �� �����ݷ� ����.

#endif COMPLEX_H						//�ߺ� ���ǰ� ���� �� �ٷ� �� �������� �ͼ� ������ ������.