#pragma once					//헤더파일 중복정의 방지

#include<string>				//string 라이브러리의 기능 사용
using std::string;				//string 사용 시 std:: 생략 가능

typedef int Elem;				//Elem이라는 int의 별명을 지어줌
class DNode {					//DNode 클래스 정의
private:						
	Elem elem;					//int형 변수 elem
	DNode* prev;				//DNode의 포인터 변수 prev 
	DNode* next;				//DNode의 포인터 변수 next 
	friend class DLinkedList;	//friend 클래스 사용
};

class DLinkedList {

private:
	DNode* header;		//리스트의 가장 앞.
	DNode* trailer;		//리스트의 가장 뒤.
public:
	DLinkedList(): header(new DNode), trailer(new DNode) {	// 생성자, header와 trailer에 DNode를 동적할당함.
		header->next = trailer; //trailer가 header->next가 됨.
		trailer->prev = header;	//header가 trailer->prev가 됨.
	}

	~DLinkedList() {		//소멸자
		while (!empty())	//empty()의 return값이 거짓일 경우
			removeFront();	//removeFront함수 실행
		delete header;		//new를 통해 동적할당 했던 header 삭제.
		delete trailer;		//new를 통해 동적할당 했던 trailer 삭제.
	}

	bool empty() const {					//empty함수, return값이 true or false인 bool함수, 함수 전체 상수처리
		return (header->next == trailer);	//header->next == trailer일 때 true 같지 않다면 false를 return
	}

	const Elem& front() const {		//front함수, 함수 전체와 반환형 상수처리. 반환형은 string
		return header->next->elem;	//Double linked list의 앞 부분인 header->next의 elem를 반환
	}
	const Elem& back() const {		//back함수, 함수 전체와 반환형 상수처리. 반환형은 string
		return trailer->prev->elem;	//Double linked list의 뒷 부분인 trailer->prev의 elem를 반환
	}

	void addFront(const Elem& e) {	//addFront함수
		add(header->next, e);		//front위치인 header->next과 함수를 통해 넘겨받은 e값을 add함수로 넘겨줌.
	}
	void addBack(const Elem& e) {	//addBack함수
		add(trailer, e);			//Back위치인 trailer->prev와 함수를 통해 넘겨받은 e값을 add함수로 넘겨줌.
	}
	void removeFront() {			//removeFront함수
		remove(header->next);		//front위치인 header->next를 remove함수로 넘겨줌.
	}
	void removeBack() {				//removeBack함수
		remove(trailer->prev);		//back위치인 trailer->prev를 remove함수로 넘겨줌.
	}

protected:								//상속된 class도 사용 가능한 protected 접근 지정자.
	void add(DNode* v, const Elem& e) {	//add함수
		DNode* u = new DNode;			//새로운 노드를 생성, DNode를 동적할당함.
		u->elem = e;					//함수를 통해 넘겨받은 e를 u의 elem에 넣어줌.
		v->prev->next = u;				//앞노드(v->prev)와 새로운 노드(u)를 연결
		u->prev = v->prev;
		u->next = v;					//새로운 노드(u)와 뒷노드(v)를 연결
		v->prev = u;
	}

	void remove(DNode* v) {			//remove함수 //**제거할 노드의 앞뒤 노드를 연결시켜주고 제거함
		v->prev->next = v->next;	//앞노드(v->prev)와 뒷노드(v->next)를 연결.
		v->next->prev = v->prev;
		delete v;					//제거할 대상(v)를 제거.
	}
};