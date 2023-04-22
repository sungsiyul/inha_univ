#pragma once			//헤더파일 중복정의 방지

typedef int Elem;		//Elem이라는 int의 별명을 지어줌
class ArrayVector {		//ArrayVector 클래스
private:				
	int capacity;		//배열의 크기
	int n;				//element의 개수
	Elem* A;			//elements를 저장하는 배열
public:
	ArrayVector(int len) :capacity(0), n(0), A(NULL) {	//생성자, 값을 생성할 때 정수 len을 넘겨받음, capacity, n은 0으로 A는 NULL로 초기화
		capacity = len;				//넘겨받은 len값를 capacity에 넣음
		A = new int[capacity]();	//A를 크기가 capacity인 배열로 동적 할당함. 배열의 값을 0으로 초기화
	}

	int size() const {			//size함수, 수정이 없으므로 함수 전체를 상수처리함.
		return n;				//배열의 크기를 return함
	}

	bool empty() const {		//empty함수, 반환형이 bool 이므로 true 혹은 false만 return.
		return (size() == 0);	//size함수에서 반환된 값이 0일 때 true 0이 아니라면 false를 return.
	}

	Elem& operator[](int i) {	//[]연산자 오버로딩, 반환형 Elem(int), 받아온 하나의 정수를 i로 사용
		return A[i];			//A[i]를 return.
	}

	void erase(int i) {						//erase함수, 받아온 하나의 정수를 i로 사용
		for (int j = i + 1; j < n; j++) {	//for문, i+1부터 n-1까지
			A[j - 1] = A[j];				//A[i+1]을 A[i]에 대입
		}
		A[n-1] = 0;							//가장 마지막의 element는 0으로 초기화를 해준다.
		n--;								//element의 개수를 1 줄여준다.
	}

	void insert(int i, const Elem& e) {		//insert함수, 둘다 정수로 받지만, i는 원하는 인덱스를 지정할 때 사용하고, e는 element를 입력할 때 사용.
		if (n >= capacity) {				//capacity보다 n이 크거나 같을 때
			reserve(max(1, 2 * capacity));	//1과 용량*2 중 더 큰 값을 reserve함수에 넘겨줌
		}
		for (int j = n - 1; j >= i; j--) {	//가장 끝 인덱스(n-1)부터 함수를 통해 받아온 인덱스(i)까지
			A[j + 1] = A[j];				//왼쪽 값을 오른쪽으로 한칸씩 이동시킴.
		}
		A[i] = e;							//함수를 통해 받아온 인덱스(i)에 e값을 대입
		n++;								//element의 개수가 늘어났으므로 n=n+1함.
	}

	void reserve(int N) {		//reserve함수, element의 개수를 함수로 받아옴.
		if (capacity >= N) {	//용량보다 element 개수가 크면
			return;				//탈출
		}
		Elem* B = new Elem[N]();		//원래 배열 A를 옮겨둘 곳인 배열 B를 capacity *2의 크기로 마련한다. 배열은 0으로 초기화함.
		for (int j = 0; j < n; j++) {	//0부터 n-1까지
			B[j] = A[j];				//배열 A의 값을 모두 배열 B에 옮김.
		}
		if (A != NULL) {		//만약 A에 값이 남아있다면
			delete[] A;			//A를 제거해준다.
		}
		capacity = N;		//capacity에 2를 곱해준 N 값을 capacity에 대입
		A = B;				//B 배열을 A 배열에 대입
	}

	void showvector() {						//showvector함수
		for(int i = 0; i < capacity; i++){	//0부터 capacity-1 까지
			cout << A[i] << "  ";			//A[i]와 적절한 공백 출력
		}
	}


};