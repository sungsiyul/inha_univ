#include "Vector.h"

//������ ������ �����ϴ� size ������ ���� ������ ����� size�� element�� �ʱ�ȭ�մϴ�, element�� �ʱ� ���Ұ��� 0���� �մϴ�.
Vector::Vector(int size) : size(size) {
	element = new int[size];
	for (int i = 0; i < size; i++) {
		element[i] = 0;
	}
}
//���� ���縦 �����ϱ� ���� ���� �����ڸ� �����մϴ�.
Vector::Vector(const Vector& copy) {
	// �����Ϸ��� ��ü�� element ������ ���� �ʴ´ٸ�, element�� �޸� ���� �� ���Ӱ� �����Ҵ��մϴ�.
	if (copy.size != this->size) {
		delete[] this->element;
		this->element = new int[copy.size];	//copy��ü�� ���Ϳ� ������ �������� �����Ҵ��մϴ�.
		this->size = copy.size;				//size ������ �����մϴ�.
	}
	//���� ����ų� ������ ���ʿ� ������ ��� for���� ���� element ���� �����մϴ�.
	for (int i = 0; i < this->size; i++) {
		this->element[i] = copy.element[i];
	}
}

// �޸� ������ �����ϱ� ���� �Ҹ��ڿ��� element�� �޸� �����մϴ�.
Vector::~Vector() {
	delete[] element;
}

//element[index] �� value��� ���� �����մϴ�.
void Vector::setElement(int index, int value) {
	this->element[index] = value;
}
//element[pos]�� ���� ��ȯ�մϴ�.
int Vector::getElement(int pos) const { return this->element[pos]; };

//operator +, -, * ��� ������ ����� ���� ��ü�� ���� �� ���� ����� setElement ����Լ��� ���� ����� �����մϴ�.
Vector Vector::operator+(const Vector& operand2) const{
	Vector result(this->size);
	for (int i = 0; i < size; i++) {
		result.setElement(i, (this->element[i] + operand2.element[i]));
	}
	return result;
}
Vector Vector::operator-(const Vector& operand2) const {
	Vector result(this->size);
	for (int i = 0; i < size; i++) {
		result.setElement(i, (this->element[i] - operand2.element[i]));
	}
	return result;
}
Vector Vector::operator*(const Vector& operand2) const {
	Vector result(this->size);
	for (int i = 0; i < size; i++) {
		result.setElement(i, (this->element[i] * operand2.element[i]));
	}
	return result;
}

//������ ��� ���Ұ� �����ϸ� True, �ϳ� �̻� �ٸ� ��� False�� ��ȯ�մϴ�.
bool Vector::operator==(const Vector& operand2) const {
	bool result = true;
	for (int i = 0; i < size; i++) {
		result = (this->element[i] == operand2.element[i]) ? true : false;
		if (!result) return result;
	}
	return result;
}

// ��� ���Ŀ� �°� ����մϴ�.
ostream& operator<<(ostream& output, const Vector& vector){
	for (int i = 0; i < vector.size; i++) {
		if (i == 0) {
			output << "��  " <<setw(3)<<vector.element[i] << " ��" << "\n";
		}
		else if (i == vector.size - 1) {
			output << "��  " << setw(3) << vector.element[i] << " ��" << "\n";
		}
		else {
			output << "��  " << setw(3) << vector.element[i] << " ��" << "\n";
		}
	}
	return output;
}

//��ü�� size ���� ��ŭ ����ڷκ��� �Է��� �޾� ��ü�� element ������ ���ʴ�� �����մϴ�.
istream& operator>>(istream& input, const Vector& vector) {
	for (int i = 0; i < vector.size; i++) {
		input >> vector.element[i];
	}
	return input;
}