#include<iostream>
using namespace std;
const float SIZE = 5.0;

//int main() {
//	int a[SIZE] = { 1,2,3,4,5 };
//	int b[SIZE] = { 1,2,3,4,5 };
//
//	//�̷��� �迭�� ����� ���ϸ� �迭 ��ü�� �ּҰ� ���
//	cout << a << "\n";
//	cout << b << "\n";
//
//	// ù��° �� : �̷��� �迭 ��ü�� ���ϸ� �ȵ�.
//	if (a == b)
//		cout << "a�� b�� ����" << "\n";
//
//	else
//		cout << "wrong result" << "\n";
//	
//	// �ι�° �� : �� ĭ���� �񱳸� �������.
//	for (int i = 0; i < SIZE; i++) {
//		if (a[i] != b[i]) {
//			cout << "a[] != b[]" << endl;		//�޶����� ���� ������ ����. ���
//			return 0;							//�ٷ� return�� �־ main�Լ� ������
//		}
//	}
//	cout << "a[] = b[]" << endl;
//
//	return 0;
//}

// return 0�� �� �� ��
void main() {
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1,2,3,4,5 };
	float z;
	//int compare=0;
	// 
	z = 21 / SIZE;
	cout << z << endl;
	//�̷��� �迭�� ����� ���ϸ� �迭 ��ü�� �ּҰ� ���
	cout << a << "\n";
	cout << b << "\n";

	// ù��° �� : �̷��� �迭 ��ü�� ���ϸ� �ȵ�.
	if (a == b)
		cout << "a�� b�� ����" << "\n";

	else
		cout << "wrong result" << "\n";

	// �ι�° �� : �� ĭ���� �񱳸� �������.
	for (int i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) {
			//compare = 1;
			cout << "a[] != b[]" << endl;		//�޶����� ���� ������ ����. ���
			break;							//�ٷ� return�� �־ main�Լ� ������
		}
	}

	for (int i = 0; i < SIZE; i++) {
		if (a[i] == b[i]) {
			//compare = 1;
			cout << "a[] = b[]" << endl;		//�޶����� ���� ������ ����. ���
			break;							//�ٷ� return�� �־ main�Լ� ������
		}
	}
}