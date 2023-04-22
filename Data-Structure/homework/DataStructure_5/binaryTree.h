#pragma once            //������� �ߺ����� ����
#include "node.h"       

template <typename T>   //�ڷ��� ��� T�� ���
class BinaryTree {  //class BinaryTree
private:            //���������� private
    Node<T>* ROOT;  //Binary Tree�� ���� �� ��带 ǥ���� �� �ִ� ROOT

public:                 //���������� public
    BinaryTree() {      //������
        ROOT = nullptr; //ROOT�� nullptr�� �ʱ�ȭ
    }
    
    ~BinaryTree() {    //�Ҹ���
    }

    void setRoot(Node<T>* root) {   //ROOT�� ���� �����ϴ� setRoot()
        ROOT = root;
    }

    Node<T>* getRoot() {            //ROOT�� ���� ��ȯ�ϴ� getRoot()
        return ROOT;
    }

    //3���� traversal
    void preorder() {                       //preorder_traversal�� ������ ���� ����ڿ��� �������� preorder()�Լ�
        cout << "preorder traversal  : ";   //��¹� ���
        preorder_traversal(ROOT);           //preorder_traversal() ȣ��
        cout << endl;                       //�ٹٲ� ���
    }
    void preorder_traversal(Node<T>* node) {        //preorder_traversal �Լ�  
        if (node != NULL) {                         //node�� ���� �ִٸ�  
            cout << node->getEle() << " ";          //visit //**���� ���� ����ϰ�
            preorder_traversal(node->getLeft());    //Left  //**node�� left_child�� node�� �ٽ� preorder_traversal()�� �Ѱ���.
            preorder_traversal(node->getRight());   //Right //**node�� right_child�� node�� �ٽ� preorder_traversal()�� �Ѱ���.
        }
    }

    void inorder() {                        //inorder_traversal�� ������ ���� ����ڿ��� �������� inorder()�Լ�
        cout << "inorder traversal   : ";    //��¹� ���
        inorder_traversal(ROOT);            //inorder_traversal() ȣ��
        cout << endl;                       //�ٹٲ� ���
    }
    void inorder_traversal(Node<T>* node) {         //inorder_traversal �Լ�
        if (node != NULL) {                         //node�� ���� �ִٸ�
            inorder_traversal(node->getLeft());     //Left
            cout << node->getEle() << " ";          //visit
            inorder_traversal(node->getRight());    //Right
        }
    }

    void postorder() {                          //postorder_traversal�� ������ ���� ����ڿ��� �������� postorder()�Լ�
        cout << "postorder traversal : ";      //��¹� ���
        postorder_traversal(ROOT);              //postorder_traversal() ȣ��
        cout << endl;                           //�ٹٲ� ���
    }
    void postorder_traversal(Node<T>* node) {       //postorder_traversal �Լ�
        if (node != NULL) {                         //node�� ���� �ִٸ� 
            postorder_traversal(node->getLeft());   //Left
            postorder_traversal(node->getRight());  //Right
            cout << node->getEle() << " ";          //visit
        }
    }
    bool isEmpty() {                //tree�� ���縦 �ľ��� �� �ִ� isEmpty()
        return ROOT == nullptr;     //ROOT�� ����ִ�(nullptr)�� ���� tree�� �������� �ʴ� ���̴�.
    }

};