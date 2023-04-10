#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

class Vector {
	friend ostream& operator<<(ostream& output, const Vector&);
	friend istream& operator>>(istream& input, const Vector&);
private:
	int *element;
	int size;
public:
	Vector(int = 1);
	Vector(const Vector&);
	~Vector();
	void setElement(int, int);
	int getElement(int) const;
	Vector operator+(const Vector&) const;
	Vector operator-(const Vector&) const;
	Vector operator*(const Vector&) const;
	bool operator==(const Vector&) const;
	bool operator!=(const Vector& object) const {
		return !(*this == object);
	}
};