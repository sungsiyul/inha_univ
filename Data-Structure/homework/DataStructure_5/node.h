#pragma once            //헤더파일 중복정의 방지
#include <iostream>     //iostream 라이브러리의 멤버 사용 가능
#include <queue>        //queue 기능 사용 가능
using namespace std;    //위 기능 사용 시 std:: 생략 가능

template <typename T>   //자료형 대신 T를 사용
struct Node {           //구조체 Node 선언
private:                //접근지정자 private
    T element;          //사용자가 template를 통해 지정한 자료형인 element
    Node* parent;       //위 노드를 가르키는 parent
    Node* left_child;   //왼쪽 자식 노드를 가르키는 left_child
    Node* right_child;  //오른쪽 자식 노드를 가르키는 right_child
public:                                                 //접근지정자 public
    Node(T ele, Node* left, Node* right, Node* par) {   //생성자
        setEle(ele);                                    //받아온 값을 set함수를 통해 멤버변수에 모두 대입.
        setLeft(left);
        setRight(right); 
        setParent(parent);
    }

    ~Node() {   //소멸자
    }

    T getEle() {            //element값을 반환하는 getEle()
        return element;
    } 
    void setEle(T ele) {    //element값을 지정하는 setEle()
        element = ele;
    }
    Node* getLeft() {           //left_child값을 반환하는 getLeft()
        return left_child;
    }
    void setLeft(Node* left) {  //left_child값을 지정하는 setLeft()
        left_child = left;
    }
    Node* getRight() {              //right_child값을 반환하는 getRight()
        return right_child; 
    }
    void setRight(Node* right) {    //right_child값을 지정하는 setRight()
        right_child = right;
    }

    Node* getParent() {             //parent값을 반환하는 getParent()
        return parent;
    }
    void setParent(Node* par) {     //parent값을 지정하는 setParent()
        parent = par;
    }

    bool isExternal() {             //가장 바깥쪽인 External node인지 확인하는 isExternal()
        return left_child == nullptr && right_child == nullptr; //노드의 left_child와 right_child가 비어있을 때 true
    }
};