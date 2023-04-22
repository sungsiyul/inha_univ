#pragma once			//������� �ߺ����� ����

typedef int Elem;		//Elem�̶�� int�� ������ ������
class ArrayVector {		//ArrayVector Ŭ����
private:				
	int capacity;		//�迭�� ũ��
	int n;				//element�� ����
	Elem* A;			//elements�� �����ϴ� �迭
public:
	ArrayVector(int len) :capacity(0), n(0), A(NULL) {	//������, ���� ������ �� ���� len�� �Ѱܹ���, capacity, n�� 0���� A�� NULL�� �ʱ�ȭ
		capacity = len;				//�Ѱܹ��� len���� capacity�� ����
		A = new int[capacity]();	//A�� ũ�Ⱑ capacity�� �迭�� ���� �Ҵ���. �迭�� ���� 0���� �ʱ�ȭ
	}

	int size() const {			//size�Լ�, ������ �����Ƿ� �Լ� ��ü�� ���ó����.
		return n;				//�迭�� ũ�⸦ return��
	}

	bool empty() const {		//empty�Լ�, ��ȯ���� bool �̹Ƿ� true Ȥ�� false�� return.
		return (size() == 0);	//size�Լ����� ��ȯ�� ���� 0�� �� true 0�� �ƴ϶�� false�� return.
	}

	Elem& operator[](int i) {	//[]������ �����ε�, ��ȯ�� Elem(int), �޾ƿ� �ϳ��� ������ i�� ���
		return A[i];			//A[i]�� return.
	}

	void erase(int i) {						//erase�Լ�, �޾ƿ� �ϳ��� ������ i�� ���
		for (int j = i + 1; j < n; j++) {	//for��, i+1���� n-1����
			A[j - 1] = A[j];				//A[i+1]�� A[i]�� ����
		}
		A[n-1] = 0;							//���� �������� element�� 0���� �ʱ�ȭ�� ���ش�.
		n--;								//element�� ������ 1 �ٿ��ش�.
	}

	void insert(int i, const Elem& e) {		//insert�Լ�, �Ѵ� ������ ������, i�� ���ϴ� �ε����� ������ �� ����ϰ�, e�� element�� �Է��� �� ���.
		if (n >= capacity) {				//capacity���� n�� ũ�ų� ���� ��
			reserve(max(1, 2 * capacity));	//1�� �뷮*2 �� �� ū ���� reserve�Լ��� �Ѱ���
		}
		for (int j = n - 1; j >= i; j--) {	//���� �� �ε���(n-1)���� �Լ��� ���� �޾ƿ� �ε���(i)����
			A[j + 1] = A[j];				//���� ���� ���������� ��ĭ�� �̵���Ŵ.
		}
		A[i] = e;							//�Լ��� ���� �޾ƿ� �ε���(i)�� e���� ����
		n++;								//element�� ������ �þ���Ƿ� n=n+1��.
	}

	void reserve(int N) {		//reserve�Լ�, element�� ������ �Լ��� �޾ƿ�.
		if (capacity >= N) {	//�뷮���� element ������ ũ��
			return;				//Ż��
		}
		Elem* B = new Elem[N]();		//���� �迭 A�� �Űܵ� ���� �迭 B�� capacity *2�� ũ��� �����Ѵ�. �迭�� 0���� �ʱ�ȭ��.
		for (int j = 0; j < n; j++) {	//0���� n-1����
			B[j] = A[j];				//�迭 A�� ���� ��� �迭 B�� �ű�.
		}
		if (A != NULL) {		//���� A�� ���� �����ִٸ�
			delete[] A;			//A�� �������ش�.
		}
		capacity = N;		//capacity�� 2�� ������ N ���� capacity�� ����
		A = B;				//B �迭�� A �迭�� ����
	}

	void showvector() {						//showvector�Լ�
		for(int i = 0; i < capacity; i++){	//0���� capacity-1 ����
			cout << A[i] << "  ";			//A[i]�� ������ ���� ���
		}
	}


};