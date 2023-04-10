#include "Vector.h"

//벡터의 차원을 결정하는 size 변수를 통해 데이터 멤버인 size와 element를 초기화합니다, element의 초기 원소값은 0으로 합니다.
Vector::Vector(int size) : size(size) {
	element = new int[size];
	for (int i = 0; i < size; i++) {
		element[i] = 0;
	}
}
//얕은 복사를 방지하기 위해 복사 생성자를 정의합니다.
Vector::Vector(const Vector& copy) {
	// 복사하려는 객체의 element 차원이 같지 않는다면, element를 메모리 해제 후 새롭게 동적할당합니다.
	if (copy.size != this->size) {
		delete[] this->element;
		this->element = new int[copy.size];	//copy객체의 벡터와 동일한 차원으로 동적할당합니다.
		this->size = copy.size;				//size 변수도 대입합니다.
	}
	//차원 맞췄거나 차원이 애초에 동일한 경우 for문을 통해 element 값을 대입합니다.
	for (int i = 0; i < this->size; i++) {
		this->element[i] = copy.element[i];
	}
}

// 메모리 누수를 방지하기 위해 소멸자에서 element를 메모리 해제합니다.
Vector::~Vector() {
	delete[] element;
}

//element[index] 에 value라는 값을 대입합니다.
void Vector::setElement(int index, int value) {
	this->element[index] = value;
}
//element[pos]의 값을 반환합니다.
int Vector::getElement(int pos) const { return this->element[pos]; };

//operator +, -, * 모두 연산의 결과를 담을 객체를 생성 후 연산 결과를 setElement 멤버함수를 통해 결과값 저장합니다.
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

//벡터의 모든 원소가 동일하면 True, 하나 이상 다를 경우 False를 반환합니다.
bool Vector::operator==(const Vector& operand2) const {
	bool result = true;
	for (int i = 0; i < size; i++) {
		result = (this->element[i] == operand2.element[i]) ? true : false;
		if (!result) return result;
	}
	return result;
}

// 출력 형식에 맞게 출력합니다.
ostream& operator<<(ostream& output, const Vector& vector){
	for (int i = 0; i < vector.size; i++) {
		if (i == 0) {
			output << "┌  " <<setw(3)<<vector.element[i] << " ┐" << "\n";
		}
		else if (i == vector.size - 1) {
			output << "└  " << setw(3) << vector.element[i] << " ┘" << "\n";
		}
		else {
			output << "│  " << setw(3) << vector.element[i] << " │" << "\n";
		}
	}
	return output;
}

//객체의 size 개수 만큼 사용자로부터 입력을 받아 객체의 element 변수에 차례대로 저장합니다.
istream& operator>>(istream& input, const Vector& vector) {
	for (int i = 0; i < vector.size; i++) {
		input >> vector.element[i];
	}
	return input;
}