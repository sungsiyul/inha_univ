#pragma once					//������� �ߺ����� ����

#include<string>				//string ���̺귯���� ��� ���
using std::string;				//string ��� �� std:: ���� ����

typedef int Elem;				//Elem�̶�� int�� ������ ������
class DNode {					//DNode Ŭ���� ����
private:						
	Elem elem;					//int�� ���� elem
	DNode* prev;				//DNode�� ������ ���� prev 
	DNode* next;				//DNode�� ������ ���� next 
	friend class DLinkedList;	//friend Ŭ���� ���
};

class DLinkedList {

private:
	DNode* header;		//����Ʈ�� ���� ��.
	DNode* trailer;		//����Ʈ�� ���� ��.
public:
	DLinkedList(): header(new DNode), trailer(new DNode) {	// ������, header�� trailer�� DNode�� �����Ҵ���.
		header->next = trailer; //trailer�� header->next�� ��.
		trailer->prev = header;	//header�� trailer->prev�� ��.
	}

	~DLinkedList() {		//�Ҹ���
		while (!empty())	//empty()�� return���� ������ ���
			removeFront();	//removeFront�Լ� ����
		delete header;		//new�� ���� �����Ҵ� �ߴ� header ����.
		delete trailer;		//new�� ���� �����Ҵ� �ߴ� trailer ����.
	}

	bool empty() const {					//empty�Լ�, return���� true or false�� bool�Լ�, �Լ� ��ü ���ó��
		return (header->next == trailer);	//header->next == trailer�� �� true ���� �ʴٸ� false�� return
	}

	const Elem& front() const {		//front�Լ�, �Լ� ��ü�� ��ȯ�� ���ó��. ��ȯ���� string
		return header->next->elem;	//Double linked list�� �� �κ��� header->next�� elem�� ��ȯ
	}
	const Elem& back() const {		//back�Լ�, �Լ� ��ü�� ��ȯ�� ���ó��. ��ȯ���� string
		return trailer->prev->elem;	//Double linked list�� �� �κ��� trailer->prev�� elem�� ��ȯ
	}

	void addFront(const Elem& e) {	//addFront�Լ�
		add(header->next, e);		//front��ġ�� header->next�� �Լ��� ���� �Ѱܹ��� e���� add�Լ��� �Ѱ���.
	}
	void addBack(const Elem& e) {	//addBack�Լ�
		add(trailer, e);			//Back��ġ�� trailer->prev�� �Լ��� ���� �Ѱܹ��� e���� add�Լ��� �Ѱ���.
	}
	void removeFront() {			//removeFront�Լ�
		remove(header->next);		//front��ġ�� header->next�� remove�Լ��� �Ѱ���.
	}
	void removeBack() {				//removeBack�Լ�
		remove(trailer->prev);		//back��ġ�� trailer->prev�� remove�Լ��� �Ѱ���.
	}

protected:								//��ӵ� class�� ��� ������ protected ���� ������.
	void add(DNode* v, const Elem& e) {	//add�Լ�
		DNode* u = new DNode;			//���ο� ��带 ����, DNode�� �����Ҵ���.
		u->elem = e;					//�Լ��� ���� �Ѱܹ��� e�� u�� elem�� �־���.
		v->prev->next = u;				//�ճ��(v->prev)�� ���ο� ���(u)�� ����
		u->prev = v->prev;
		u->next = v;					//���ο� ���(u)�� �޳��(v)�� ����
		v->prev = u;
	}

	void remove(DNode* v) {			//remove�Լ� //**������ ����� �յ� ��带 ��������ְ� ������
		v->prev->next = v->next;	//�ճ��(v->prev)�� �޳��(v->next)�� ����.
		v->next->prev = v->prev;
		delete v;					//������ ���(v)�� ����.
	}
};