#pragma once            //������� �ߺ����� ����
#include <iostream>     //iostream ���̺귯���� ��� ��� ����
#include <queue>        //queue ��� ��� ����
using namespace std;    //�� ��� ��� �� std:: ���� ����

template <typename T>   //�ڷ��� ��� T�� ���
struct Node {           //����ü Node ����
private:                //���������� private
    T element;          //����ڰ� template�� ���� ������ �ڷ����� element
    Node* parent;       //�� ��带 ����Ű�� parent
    Node* left_child;   //���� �ڽ� ��带 ����Ű�� left_child
    Node* right_child;  //������ �ڽ� ��带 ����Ű�� right_child
public:                                                 //���������� public
    Node(T ele, Node* left, Node* right, Node* par) {   //������
        setEle(ele);                                    //�޾ƿ� ���� set�Լ��� ���� ��������� ��� ����.
        setLeft(left);
        setRight(right); 
        setParent(parent);
    }

    ~Node() {   //�Ҹ���
    }

    T getEle() {            //element���� ��ȯ�ϴ� getEle()
        return element;
    } 
    void setEle(T ele) {    //element���� �����ϴ� setEle()
        element = ele;
    }
    Node* getLeft() {           //left_child���� ��ȯ�ϴ� getLeft()
        return left_child;
    }
    void setLeft(Node* left) {  //left_child���� �����ϴ� setLeft()
        left_child = left;
    }
    Node* getRight() {              //right_child���� ��ȯ�ϴ� getRight()
        return right_child; 
    }
    void setRight(Node* right) {    //right_child���� �����ϴ� setRight()
        right_child = right;
    }

    Node* getParent() {             //parent���� ��ȯ�ϴ� getParent()
        return parent;
    }
    void setParent(Node* par) {     //parent���� �����ϴ� setParent()
        parent = par;
    }

    bool isExternal() {             //���� �ٱ����� External node���� Ȯ���ϴ� isExternal()
        return left_child == nullptr && right_child == nullptr; //����� left_child�� right_child�� ������� �� true
    }
};