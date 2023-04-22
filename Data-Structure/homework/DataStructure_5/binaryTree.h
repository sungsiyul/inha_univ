#pragma once            //헤더파일 중복정의 방지
#include "node.h"       

template <typename T>   //자료형 대신 T를 사용
class BinaryTree {  //class BinaryTree
private:            //접근지정자 private
    Node<T>* ROOT;  //Binary Tree의 가장 윗 노드를 표현할 수 있는 ROOT

public:                 //접근지정자 public
    BinaryTree() {      //생성자
        ROOT = nullptr; //ROOT를 nullptr로 초기화
    }
    
    ~BinaryTree() {    //소멸자
    }

    void setRoot(Node<T>* root) {   //ROOT의 값을 지정하는 setRoot()
        ROOT = root;
    }

    Node<T>* getRoot() {            //ROOT의 값을 반환하는 getRoot()
        return ROOT;
    }

    //3가지 traversal
    void preorder() {                       //preorder_traversal을 구현을 위해 사용자에게 보여지는 preorder()함수
        cout << "preorder traversal  : ";   //출력문 출력
        preorder_traversal(ROOT);           //preorder_traversal() 호출
        cout << endl;                       //줄바꿈 출력
    }
    void preorder_traversal(Node<T>* node) {        //preorder_traversal 함수  
        if (node != NULL) {                         //node에 값이 있다면  
            cout << node->getEle() << " ";          //visit //**값을 먼저 출력하고
            preorder_traversal(node->getLeft());    //Left  //**node의 left_child의 node를 다시 preorder_traversal()로 넘겨줌.
            preorder_traversal(node->getRight());   //Right //**node의 right_child의 node를 다시 preorder_traversal()로 넘겨줌.
        }
    }

    void inorder() {                        //inorder_traversal을 구현을 위해 사용자에게 보여지는 inorder()함수
        cout << "inorder traversal   : ";    //출력문 출력
        inorder_traversal(ROOT);            //inorder_traversal() 호출
        cout << endl;                       //줄바꿈 출력
    }
    void inorder_traversal(Node<T>* node) {         //inorder_traversal 함수
        if (node != NULL) {                         //node에 값이 있다면
            inorder_traversal(node->getLeft());     //Left
            cout << node->getEle() << " ";          //visit
            inorder_traversal(node->getRight());    //Right
        }
    }

    void postorder() {                          //postorder_traversal을 구현을 위해 사용자에게 보여지는 postorder()함수
        cout << "postorder traversal : ";      //출력문 출력
        postorder_traversal(ROOT);              //postorder_traversal() 호출
        cout << endl;                           //줄바꿈 출력
    }
    void postorder_traversal(Node<T>* node) {       //postorder_traversal 함수
        if (node != NULL) {                         //node에 값이 있다면 
            postorder_traversal(node->getLeft());   //Left
            postorder_traversal(node->getRight());  //Right
            cout << node->getEle() << " ";          //visit
        }
    }
    bool isEmpty() {                //tree의 존재를 파악할 수 있는 isEmpty()
        return ROOT == nullptr;     //ROOT가 비어있다(nullptr)는 것은 tree가 존재하지 않는 것이다.
    }

};